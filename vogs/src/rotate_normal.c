/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_normal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 12:54:07 by mdube             #+#    #+#             */
/*   Updated: 2019/09/07 14:24:03 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void				rotate_normal(t_block **head)
{
	long			temp;
	unsigned int	len;
	t_block			*previous;
	t_block			*start;

	len = list_length((*head));
	if (len <= 1)
		return ;
	previous = (*head);
	start = (*head);
	while (--len > 0)
	{
		previous = start;
		temp = start->data;
		start = start->next;
		previous->data = start->data;
		start->data = temp;
	}
}
