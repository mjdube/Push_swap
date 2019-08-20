/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 14:39:18 by mdube             #+#    #+#             */
/*   Updated: 2019/08/19 14:31:37 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H
# define CHECK_H
# include "../libft/libft.h"

typedef struct node
{
	int data;
	struct node *next;
}block;

block		*create_stack_a(block *stack);
block		*createNode(void);
block		*create_stack(int argc, char **argv);
block		*push_to_stack(int number, block *stack);
block		*push_list(block *stack);

int		pop_number(block *stack);
int		list_length(block *head);


void		ft_instr(char *line, block *stack);
void		ft_instr_both(char *line, block *stack1, block *stack2);
void		swap_data(block *head);
void		rotate_normal(block *stack);
void		rotate_reverse(block *stack);
void		push(int num, block *list1, block *list2);
#endif
