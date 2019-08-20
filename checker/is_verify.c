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

#include "check.h"
#include "../libft/libft.h"


int			is_verify(char *line)
{
	if (ft_strcmp("sa", (const char*)line))
		return (1);
	if (ft_strcmp("sb", (const char*)line))
		return (2);
	if (ft_strcmp("ss", (const char*)line))
		return (3);
	if (ft_strcmp("ra", (const char*)line))
		return (4);
	if (ft_strcmp("rb", (const char*)line))
		return (5);
	if (ft_strcmp("rr", (const char*)line))
		return (6);
	if (ft_strcmp("rra", (const char*)line))
		return (7);
	if (ft_strcmp("rrb", (const char*)line))
		return (8);
	if (ft_strcmp("rrr", (const char*)line))
		return (9);
	else
		return (0);
}
