/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 15:52:19 by mdube             #+#    #+#             */
/*   Updated: 2019/07/27 13:11:34 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

block			*create_stack_b(int num)
{
	block		*temp;
	block		*node;
	block		*head;

	head = NULL;
	temp = NULL;
	node = NULL;
	node = createNode();
	if (head == NULL)
	{
		node->data = num;
		head = node;
	}
}
