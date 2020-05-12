/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:18:48 by mdube             #+#    #+#             */
/*   Updated: 2019/09/16 14:18:52 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		int_max(char *str)
{
	int		len;
	char	*max;
	char	*min;

	len = ft_strlen(str);
	min = "2147483648";
	max = "2147483647";
	str = (len == 11 && *str == '-') ? str + 1 : str;
	while (*str && len >= 10)
	{
		if (len == 10)
		{
			if (ft_strncmp(str, max, 1) > 0)
				return (1);
			max++;
		}
		else
		{
			if (ft_strncmp(str, min, 1) > 0)
				return (1);
			min++;
		}
		str++;
	}
	return (0);
}