/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 17:17:12 by mdube             #+#    #+#             */
/*   Updated: 2019/08/24 15:10:13 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker/check.h"

int				main(int argc, char **argv)
{
	char		*line;
	t_block		*stack_a;
	t_block		*stack_b;

	if (argc > 1)
	{
		stack_b = NULL;
		if (ft_checking_numbers(argv) == 1)
		{
			stack_a = create_stack(argc, argv);
			while (get_next_line(0, &line) > 0)
				reading_instr(&stack_a, &stack_b, is_verify(line));
		}
		else
		{
			ft_putstr("ERROR\n");
			return (0);
		}
		(list_length(stack_b) > 0) ? ft_putstr("KO\n") : ft_putstr("OK\n");
	}
	return (0);
}
