/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 15:56:39 by mdube             #+#    #+#             */
/*   Updated: 2019/07/22 09:47:42 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

void		swap_data(block *head)
{
	int		i;
	int		temp;
	block	*temp1;
	block	*temp2;

	temp1 = head;
	temp2 = head;
	i = 1;
	while (i <= 2)
	{
		temp2 = temp2->next;
		i++;
	}
	temp = temp1.data;
	temp1.data = temp2.data;
	temp2.data = temp;
}


