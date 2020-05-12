/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 14:01:12 by mdube             #+#    #+#             */
/*   Updated: 2019/09/07 14:19:22 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			push(t_block **lstsrc, t_block **lstdst)
{
	t_block *temp;

	if ((*lstsrc) == NULL)
		return ;
	temp = (*lstsrc)->next;
	if (*lstdst == NULL)
	{
		(*lstsrc)->next = NULL;
		*lstdst = *lstsrc;
		*lstsrc = temp;
	}
	else
	{
		(*lstsrc)->next = *lstdst;
		*lstdst = *lstsrc;
		*lstsrc = temp;
	}
	// free(temp);
}
