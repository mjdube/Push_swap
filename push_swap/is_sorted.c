/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 13:54:36 by mdube             #+#    #+#             */
/*   Updated: 2019/08/24 14:53:36 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker/check.h"
#include "push_swap.h"

int		is_sorted(block *stack)
{
	block *lst;

	lst = stack;
	while (lst)
	{
		if (compare(lst->data, lst->next->data) == 0)
			lst = lst->next;
		else
			return (0);
	}
	return (1);
}
