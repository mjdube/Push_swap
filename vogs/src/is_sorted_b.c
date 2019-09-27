/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 08:30:16 by mdube             #+#    #+#             */
/*   Updated: 2019/09/18 08:30:20 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int             is_sorted_b(t_block *stack)
{
	int			i;
	t_block		*lst;

	i = 1;
	lst = stack;
	if (lst == NULL)
		return (0);
	while (lst != NULL)
	{
		if (compare(lst->data, lst->next->data) == 1)
		{	
			lst = lst->next;
			i++;
		}
		else
			return (i);
	}
	return (0);

}