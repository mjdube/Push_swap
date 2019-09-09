/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 16:45:22 by mdube             #+#    #+#             */
/*   Updated: 2019/08/17 13:59:51 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

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
