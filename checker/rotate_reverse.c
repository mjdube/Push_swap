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

void		rotate_reverse(block *stack)
{
	block *previous;
	int temp;

	previous = stack;
	while (stack->next!= NULL)
	{
		stack = stack->next;
		temp = stack->data;
		stack->data = previous->data;
		previous->data = temp;
	}
}
