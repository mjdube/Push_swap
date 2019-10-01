/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 15:56:39 by mdube             #+#    #+#             */
/*   Updated: 2019/07/29 13:13:11 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void				swap_data(t_block **head)
{
	long 			swap;
	unsigned int	len;
	t_block			*temp1;
	t_block			*temp2;

	len = list_length((*head));
	if (len < 1)
		return ;
	temp1 = (*head);
	temp2 = (*head);
	temp2 = temp2->next;
	swap = temp1->data;
	temp1->data = temp2->data;
	temp2->data = swap;
}
