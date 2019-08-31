/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 05:48:40 by mdube             #+#    #+#             */
/*   Updated: 2019/08/03 05:57:46 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"
#include <stdio.h>

void		rotate_reverse(block **stack)
{
	block *start;
	block *previous;
	block *end;
	int len;
	int temp;

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
