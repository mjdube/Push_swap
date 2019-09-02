/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 14:48:20 by mdube             #+#    #+#             */
/*   Updated: 2019/09/02 14:48:24 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_sorted_a(block *stack)
{
	block *lst;

	lst = stack;
	while (lst->next != NULL)
	{
		if (compare(lst->data, lst->next->data) == 1)
			lst = lst->next;
		else
			return (0);
	}
	return (1);
}