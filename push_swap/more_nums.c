/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_nums.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:53:48 by mdube             #+#    #+#             */
/*   Updated: 2019/09/08 13:53:58 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void        more_nums(t_block **stack_a, int small, unsigned int split)
{
    if (top_bottom(*stack_a, small, split) == 1)
    {
        rotate_normal(*(&stack_a));
        ft_putendl("ra");
    }
    else if (top_bottom(*stack_a, small, split) == 2)
    {
        rotate_reverse(*(&stack_a));
        ft_putendl("rra");
    }
}