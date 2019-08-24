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

void		 reading_instr(block *stack1, block *stack2, int accept)
{
	ft_instr(stack_a, accept);
	ft_instr(stack_b, accept);
	ft_instr_both(stack_a, stack_b, accept);
}
