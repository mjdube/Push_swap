/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 14:01:12 by mdube             #+#    #+#             */
/*   Updated: 2019/09/07 14:19:22 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			push(t_block **lstsrc, t_block **lstdst)
{
	int			num;

	num = pop_number(*lstsrc);
	*lstdst = push_to_stack(num, *lstdst);
	*lstsrc = push_list(*lstsrc);
}
