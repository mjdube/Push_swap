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
	block	**previous;

	len = list_length((*head));
	if (len < 1)
		return ;
	while (len--)
	{
		*previous = *head;
		temp = (*head)->data;
		*head = (*head)->next;
		(*previous)->data = (*head)->data;
		(*head)->data = temp;
	}
}
