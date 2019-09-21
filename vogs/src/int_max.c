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

int         int_max(t_block *stack)
{
    t_block *lst;

    lst = stack;
    while (lst->next != NULL)
    {
        if (-2147483648 <= lst->data && lst->data <= 2147483647)
            lst = lst->next;
        else
            return (0);
    }
    return (1);
}