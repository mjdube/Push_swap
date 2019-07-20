/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createNode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 11:57:20 by mdube             #+#    #+#             */
/*   Updated: 2019/07/20 14:38:29 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

block		*createNode(void)
{
	block	*node;

	node = (block*)ft_memalloc(block);
	node->data = NULL;
	node->next = NULL;
	return (node);
}
