/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop_stack_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 11:11:57 by mdube             #+#    #+#             */
/*   Updated: 2019/09/13 11:11:59 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void        loop_stack_2(t_block **stack_a, t_block **stack_b)
{
    long            num;
    unsigned int    len;
    int             rb;
    int             rrb;

    len = list_length((*stack_b));
    num = big_number(*stack_b);
    if (is_sorted_b(*stack_b) == 0)
        return ;
    else if (len >= 2 && is_sorted_b(*stack_b) == 1)
    {
        swap_data(*(&stack_b));
        ft_putendl("sb");
    }
    if (is_sorted_b(*stack_b) >= 2 && (*stack_b)->data == num)
    {
        rb = is_sorted_b(*stack_b);
        rrb = is_sorted_b(*stack_b);
        while (--rb)
        {
            rotate_normal(&(*stack_b));
            ft_putendl("rb");
        }
        swap_data(&(*stack_b));
        ft_putendl("sb");
        while (--rrb)
        {
            rotate_reverse(&(*stack_b));
            ft_putendl("rrb");
        }
    }
}
