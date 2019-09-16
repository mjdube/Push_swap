/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dup_nums.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 11:31:09 by mdube             #+#    #+#             */
/*   Updated: 2019/09/16 11:31:40 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int					dup_nums(t_block *stack)
{
	t_block			*search;
	t_block			*find;
	unsigned int	len;
	unsigned int	i;

	len = list_length(stack);
	search = stack;
	while (search != NULL)
	{
		i = 0;
		find = search;
		while (i < len)
		{
			if (search->data != find->data)
				find = find->next;
			else if (search->data == find->data)
				return (0);
			i++;
		}
		search = search->next;
		len--;
	}
	return (1);
}