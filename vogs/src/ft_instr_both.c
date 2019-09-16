/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instr_both.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 14:21:20 by mdube             #+#    #+#             */
/*   Updated: 2019/08/24 16:02:36 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_instr_both(t_block **stack1, t_block **stack2, int num)
{
	if (num == 3)
	{
		swap_data(stack1);
		swap_data(stack2);
	}
	else if (num == 6)
	{
		rotate_reverse(stack1);
		rotate_reverse(stack2);
	}
	else if (num == 9)
	{
		rotate_reverse(stack1);
		rotate_reverse(stack2);
	}
	else
		return ;
}
