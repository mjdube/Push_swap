/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading_instr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/24 10:47:15 by mdube             #+#    #+#             */
/*   Updated: 2019/08/24 16:02:57 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

void		 reading_instr(block **stack1, block **stack2, int accept)
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
}
