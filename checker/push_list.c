/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 16:45:06 by mdube             #+#    #+#             */
/*   Updated: 2019/08/13 16:45:08 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

t_block		*push_list(t_block *stack)
{
	t_block *temp;

	if (stack == NULL)
		return (NULL);
	temp = stack;
	stack = stack->next;
	free(temp);
	return (stack);

}
