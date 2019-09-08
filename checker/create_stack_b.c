/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 15:52:19 by mdube             #+#    #+#             */
/*   Updated: 2019/07/29 18:15:15 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

t_block		*create_stack_b(t_block *stack)
{
	int len;
	t_block *head;
	t_block *node;
	t_block *temp;

	head = NULL;
	len = list_length(stack);
	if (len == 1)
	{
		head = create_node();
		head->data = stack->data;
		return (head);
	}
	else if (len == 0)
		return (NULL);
	if (head == NULL)
	{
		node = create_node();
		node->data = stack->data;
		head = node;
		stack = stack->next;
	}
	while (stack)
	{
		temp = create_node();
		temp->data = stack->data;
		node->next = temp;
		node = node->next;
		stack = stack->next;
	}
	return (head);
}
