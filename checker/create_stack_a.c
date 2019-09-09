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

t_block		*create_stack_a(t_block *stack)
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
	else if (len == 0 || stack == NULL)
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
