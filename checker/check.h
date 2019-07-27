/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 14:39:18 by mdube             #+#    #+#             */
/*   Updated: 2019/07/27 13:08:54 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H
# define CHECK_H
# include "../libft/libft.h"

typedef	struct	node
{
	int	data;
	struct node	*next;
}				block;

block		*createNode(void);
block		*create_stack(int NumNodes, char *nums);
int			list_length(block *head);
#endif
