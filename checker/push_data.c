/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 17:59:44 by mdube             #+#    #+#             */
/*   Updated: 2019/07/25 17:57:12 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

void			push_data(block *head, int )
{
	block	*temp;
	int		num;

	temp = head;
	num = temp->data;
	temp = temp->next;
	head = temp;
}
