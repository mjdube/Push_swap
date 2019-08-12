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

block		*create_stack_b(block *stack)
{
	int len;
	block *head;
	block *node;
	block *temp;

	head = NULL;
	len = list_length(stack);
	if (len == 1)
	{
		head = createNode();
		head->data = stack->data;
		return (head);
	}
	else if (len == 0)
		return (NULL);
	if (head == NULL)
	{
		node = createNode();
		node->data = stack->data;
		head = node;
		stack = stack->next;
	}
	while (stack)
	{
		temp = createNode();
		temp->data = stack->data;
		node->next = temp;
		node = node->next;
		stack = stack->next;
	}
	return (head);
}
