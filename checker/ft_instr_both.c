/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instr_both.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 14:21:20 by mdube             #+#    #+#             */
/*   Updated: 2019/08/20 16:38:00 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"
#include "../libft/libft.h"

void		ft_instr_both(block *stack1, block *stack2, int num)
{
	if (ft_strequ("ss", (const char*)line))
	{
		swap_data(stack1);
		swap_data(stack2);
	}
	else if (ft_strequ("rr", (const char*)line))
	{
		rotate_reverse(stack1);
		rotate_reverse(stack2);
	}
	else if (ft_strequ("rrr", (const char*)line))
	{
		rotate_reverse(stack1);
		rotate_reverse(stack2);
	}
	else
		return ;
}
