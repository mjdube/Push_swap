/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 05:48:40 by mdube             #+#    #+#             */
/*   Updated: 2019/09/07 14:24:24 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			rotate_reverse(t_block **stack)
{
	t_block		*start;
	t_block 	*previous;
	t_block 	*end;
	int			len;
	long long	temp;

	len = list_length((*stack));
	if (len <= 1)
		return ;
	start = (*stack);
	previous = (*stack);
	end = (*stack);
	while (end->next != NULL)
		end = end->next;
	while (--len)
	{
		temp = start->data;
		start->data = end->data;
		end->data = temp;
		start = start->next;
	}
	return ;
}
