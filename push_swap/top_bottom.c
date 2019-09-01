/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   top_bottom.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 07:26:15 by mdube             #+#    #+#             */
/*   Updated: 2019/08/31 07:26:21 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int         top_bottom(block *stack, int small, int split)
{
    int i;
    int found;

    i = 1;
    while (stack->next != NULL)
    {
        if (split >= i)
        {
            if (stack->data == small)
                found = 1;          
        }
        else if (split <= i)
        {
            if (stack->data == small)
                found = 2;
        }
        stack = stack->next;
    }
    return (found);
}
