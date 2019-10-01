/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   top_bottom.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 07:26:15 by mdube             #+#    #+#             */
/*   Updated: 2019/09/09 10:24:08 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int					top_bottom(t_block *stack, long long num, unsigned int split)
{
	unsigned int	i;
	int				found;
	unsigned int	len;
	t_block			*lst;

	i = 1;
	lst = stack;
	len = list_length(stack);
	while (len--)
	{
		if (split >= i)
		{
			if (lst->data == num)
				found = 1;
		}
		else if (split <= i)
		{
			if (lst->data == num)
				found = 2;
		}
		lst = lst->next;
		i++;
	}
	return (found);
}
