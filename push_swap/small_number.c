/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 21:24:37 by mdube             #+#    #+#             */
/*   Updated: 2019/08/30 21:25:00 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int         small_number(t_block *stack)
{
    int len;
    int small;

    len = list_length(stack);
    if (len > 0)
        small = stack->data;
    while (--len)
    {
        stack = stack->next;
        if (stack->data < small)
            small = stack->data;
    
    }
    return (small);
}