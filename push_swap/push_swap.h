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
int			is_sorted_a(block *stack);
int         small_number(block *stack);
int         top_bottom(block *stack, int small, int div);

void        loop_stack(block **stack_a, block **stack_b);
#endif
