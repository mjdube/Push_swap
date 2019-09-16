/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 13:54:36 by mdube             #+#    #+#             */
/*   Updated: 2019/09/15 12:27:30 by mdube            ###   ########.fr       */
/*   Updated: 2019/09/15 07:35:28 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_sorted(t_block *stack)
{
	t_block *lst;

	lst = stack;
	while (lst->next != NULL)
	{
		if (compare(lst->data, lst->next->data) == 0)
			lst = lst->next;
		else
			return (0);
	}
	return (1);
}
