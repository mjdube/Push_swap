/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading_instr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 10:47:15 by mdube             #+#    #+#             */
/*   Updated: 2019/09/07 14:23:28 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reading_instr(t_block **stack1, t_block **stack2, int accept)
{
	if (accept == 1 || accept == 4 || accept == 7)
		ft_instr(&(*stack1), accept);
	else if (accept == 2 || accept == 5 || accept == 8)
		ft_instr(&(*stack2), accept);
	else if (accept == 3 || accept == 6 || accept == 9)
		ft_instr_both(&(*stack1), &(*stack2), accept);
	else if (accept == 10)
		push(&(*stack2), &(*stack1));
	else if (accept == 11)
		push(&(*stack1), &(*stack2));
	else if (accept == 0)
	{
		ft_putendl("ERROR");
		exit(0);
	}
}
