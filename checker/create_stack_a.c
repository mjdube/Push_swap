/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 14:29:32 by mdube             #+#    #+#             */
/*   Updated: 2019/07/29 18:20:24 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

block		*create_stack_a(block *stack)
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
