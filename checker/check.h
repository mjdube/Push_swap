/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 14:39:18 by mdube             #+#    #+#             */
/*   Updated: 2019/08/24 16:10:43 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H
# define CHECK_H
# include "../libft/libft.h"

typedef struct	node
{
	int data;
	struct node *next;
}				block;

block		*create_stack_a(block *stack);
block		*createNode(void);
block		*create_stack(int argc, char **argv);
block		*push_to_stack(int number, block *stack);
block		*push_list(block *stack);

int			pop_number(block *stack);
int			list_length(block *head);
int			is_verify(char *line);
int			ft_checking_numbers(char **str);

void		reading_instr(block **stack1, block **stack2, int accept);
void		ft_instr(block **stack, int num);
void		ft_instr_both(block **stack1, block **stack2, int num);
void		swap_data(block **head);
void		rotate_normal(block **stack);
void		rotate_reverse(block **stack);
void		push(block **lstsrc, block **lstdst);

#endif
