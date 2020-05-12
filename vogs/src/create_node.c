/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 13:55:37 by mdube             #+#    #+#             */
/*   Updated: 2019/09/07 14:11:25 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_block		*create_node(void)
{
	t_block	*node;

	node = NULL;
	node = (t_block*)malloc(sizeof(t_block));
	node->data = 0;
	node->next = NULL;
	return (node);
}
