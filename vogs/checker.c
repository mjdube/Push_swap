/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:17:12 by mdube             #+#    #+#             */
/*   Updated: 2019/09/16 11:36:04 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/push_swap.h"

int				main(int argc, char **argv)
{
	char		*line;
	t_block		*stack_a;
	t_block		*stack_b;

	stack_b = NULL;
	if (argc >= 2)
	{
		if (argc > 2)
			if (ft_checking_numbers(argv + 1) == 0)
				return (0);
			else
			{
				stack_a = create_stack(argv + 1);
				while (get_next_line(0, &line) > 0)
					reading_instr(&stack_a, &stack_b, is_verify(line));
			}
		else if (argc == 2) 
		{
			argv = ft_strsplit(argv[1], ' ');
			if (ft_checking_numbers(argv) == 0)
			{
				ft_delarray(argv);
				return (0);
			}
			stack_a = create_stack(argv);
			while (get_next_line(0, &line) > 0)
					reading_instr(&stack_a, &stack_b, is_verify(line));
		}
		(is_sorted(stack_a) > 0 || list_length(stack_b) > 0) ? ft_putstr("KO\n") : ft_putstr("OK\n");
	}
	return (0);
}
