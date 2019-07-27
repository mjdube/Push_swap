/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 15:56:39 by mdube             #+#    #+#             */
/*   Updated: 2019/07/26 13:21:02 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

void		swap_data(block *head)
{
	int		temp;
	block	*temp1;
	block	*temp2;

	temp1 = head;
	temp2 = head;
	temp2 = temp2->next;
	temp = temp1.data;
	temp1.data = temp2.data;
	temp2.data = temp;
}
