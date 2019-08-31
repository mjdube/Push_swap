/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 15:00:59 by mdube             #+#    #+#             */
/*   Updated: 2019/08/31 15:01:03 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void        loop_stack(block **stack_a, block **stack_b)
{
    int i;
    int small;
    int div;
    int len;

    i = 0;
    small = small_number((*stack_a));
    len = list_length((*stack_a));
    while (is_sorted_a(*stack_a) == 0)
    {
        ft_putendl("hi");
        div = len / 2;
        if (top_bottom(*stack_a, small, div) == 1)
            rotate_normal(&(*stack_a));
        if (top_bottom(*stack_a, small, div) == 2)
            rotate_reverse(&(*stack_a));
        else if ((*stack_a)->data == small)
        {
            if (is_sorted_a(*stack_a) == 1)
            {
                ft_putstr("hi\n");
                push(&(*stack_a), &(*stack_b));
                break ;
            }
        }
    }
}