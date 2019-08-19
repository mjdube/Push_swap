/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 14:01:12 by mdube             #+#    #+#             */
/*   Updated: 2019/08/17 14:21:24 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

void			push(int num, block *lstsrc, block *lstdst)
{
	num = pop_number(lstsrc);
	lstdst = push_to_stack(num, lstdst);
	lstsrc = push_list(lstsrc);
}

// Pops lstsrc number on top and then pushes it on top of lstdst
