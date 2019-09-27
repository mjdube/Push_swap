/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 14:12:38 by mdube             #+#    #+#             */
/*   Updated: 2019/08/20 16:38:03 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_instr(t_block **stack, int accept)
{
	if (accept == 1 || accept == 2)
		swap_data((*(&stack)));
	else if (accept == 4 || accept == 5)
		rotate_normal((*(&stack)));
	else if (accept == 7 || accept == 8)
		rotate_reverse((*(&stack)));
	else
		return ;
}
