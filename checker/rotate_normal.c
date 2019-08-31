/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_normal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 12:54:07 by mdube             #+#    #+#             */
/*   Updated: 2019/07/29 13:14:40 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

void			rotate_normal(block **head)
{
	int		temp;
	int		len;
	block	*previous;
	block	*start;

	len = list_length((*head));
	if (len <= 1)
		return ;
	previous = (*head);
	start = (*head);
	while (--len > 0)
	{
		previous = start;
		temp = start->data;
		start = start->next;
		previous->data = start->data;
		start->data = temp;
	}
}
