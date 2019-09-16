/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 16:45:22 by mdube             #+#    #+#             */
/*   Updated: 2019/09/07 14:46:12 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_block		*push_to_stack(int number, t_block *stack)
{
	t_block	*temp;

	if (stack == NULL)
	{
		temp = create_node();
		temp->data = number;
		return (temp);
	}
	temp = create_node();
	temp->data = number;
	temp->next = stack;
	return (temp);
}
