/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 17:33:38 by mdube             #+#    #+#             */
/*   Updated: 2019/07/29 18:20:19 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

block		*push_list(block *stack)
{
	block *previous;

	previous = stack;
	stack = stack->next;
	free(previous);
	return (stack);
}
