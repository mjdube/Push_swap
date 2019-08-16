/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 16:45:22 by mdube             #+#    #+#             */
/*   Updated: 2019/08/13 16:45:24 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

block		*push_to_stack(int number, block *stack)
{
	block	*temp;
	if (stack == NULL)
	{
		temp = createNode();
		temp->data = number;
		return (temp);
	}
	temp = createNode();
	temp->data = number;
	temp->next = stack;
	return (temp);
}
