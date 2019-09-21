/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_length.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 13:01:04 by mdube             #+#    #+#             */
/*   Updated: 2019/07/27 13:09:42 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

unsigned int		list_length(t_block *head)
{
	unsigned int	i;

	i = 0;
	if (head == NULL)
		return (0);
	while (head)
	{
		head = head->next;
		i++;
	}
	return (i);
}
