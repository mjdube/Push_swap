/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createNode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 11:57:20 by mdube             #+#    #+#             */
/*   Updated: 2019/07/22 13:16:17 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check.h"

block		*createNode(void)
{
	block	*node;

	node = (block*)ft_memalloc(sizeof(block));
	node->data = 0;
	node->next = NULL;
	return (node);
}
