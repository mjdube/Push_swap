/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 12:37:23 by mdube             #+#    #+#             */
/*   Updated: 2019/08/16 18:28:00 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "../checker/check.h"

int			compare(int num1, int num2);
int			is_sorted(t_block *stack);
int         small_number(t_block *stack);
int         top_bottom(t_block *stack, int small, unsigned int split);
int         big_number(t_block *stack_a);

void        loop_stack(t_block **stack_a, t_block **stack_b, unsigned int len, int range);
void        three_nums(t_block **stack_a);
void        more_nums(t_block **stack_a, int small, unsigned int split);

#endif
