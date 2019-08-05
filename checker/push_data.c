/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 17:31:21 by mdube             #+#    #+#             */
/*   Updated: 2019/07/29 18:20:14 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

block			*push_data(block *stack, int num)
{
	block *begin;

	begin = createNode();
	begin->data = num;
	begin->next = stack;
	return (begin);
}
