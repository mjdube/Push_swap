/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_sb_rrb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 12:18:37 by mdube             #+#    #+#             */
/*   Updated: 2019/10/03 12:18:54 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void        rb_sb_rrb(t_block **stack)
{
    int     rb;
    int     rrb;

    rb = is_sorted_b(*stack);
    rrb = is_sorted_b(*stack);
    while (--rb)
    {
        rotate_normal(&(*stack));
        ft_putendl("rb");
    }
    swap_data(&(*stack));
    ft_putendl("sb");
    while (--rrb)
    {
        rotate_reverse(&(*stack));
        ft_putendl("rrb");
    }
}