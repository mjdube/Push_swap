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

#include "../check.h"

block		*create_stack_a(block *stack, int data)
{
	block	*head;

	if (!data)
		return (stack);
	head = createNode();
	head->data = data;
	head->next = stack;
	return (head);
}