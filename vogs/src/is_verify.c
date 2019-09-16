/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_verify.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 10:06:05 by mdube             #+#    #+#             */
/*   Updated: 2019/08/20 16:39:38 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			is_verify(char *line)
{
	if (ft_strcmp("sa", (const char*)line) == 0)
		return (1);
	else if (ft_strcmp("sb", (const char*)line) == 0)
		return (2);
	else if (ft_strcmp("ss", (const char*)line) == 0)
		return (3);
	else if (ft_strcmp("ra", (const char*)line) == 0)
		return (4);
	else if (ft_strcmp("rb", (const char*)line) == 0)
		return (5);
	else if (ft_strcmp("rr", (const char*)line) == 0)
		return (6);
	else if (ft_strcmp("rra", (const char*)line) == 0)
		return (7);
	else if (ft_strcmp("rrb", (const char*)line) == 0)
		return (8);
	else if (ft_strcmp("rrr", (const char*)line) == 0)
		return (9);
	else if (ft_strcmp("pa", (const char*)line) == 0)
		return (10);
	else if (ft_strcmp("pb", (const char*)line) == 0)
		return (11);
	else
		return (0);
}
