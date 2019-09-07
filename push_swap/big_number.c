/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_number.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 11:36:35 by mdube             #+#    #+#             */
/*   Updated: 2019/09/07 11:36:39 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int         big_number(block *stack)
{
    int len;
    int big;

    len = list_length(stack);
    if (len > 0)
        big = stack->data;
    while (--len)
    {
        stack = stack->next;
        if (stack->data > big)
            big = stack->data;
    
    }
    return (big);
}