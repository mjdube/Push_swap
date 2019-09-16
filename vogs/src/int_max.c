/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:18:48 by mdube             #+#    #+#             */
/*   Updated: 2019/09/16 14:18:52 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int         int_max(t_block *stack)
{
    unsigned int i;
    unsigned int len;

    i = 0;
    len = list_length(stack);
    while (i < len)
    {
        if (-2147483648 >= stack->data && stack->data <= 2147483647)
            stack = stack->next;
        else
            return (0);
        i++;
    }
    return (1);
}