/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 12:37:23 by mdube             #+#    #+#             */
/*   Updated: 2019/09/16 11:32:42 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct		s_node
{
	long long		data;
	struct s_node	*next;
}					t_block;

t_block				*create_stack_a(t_block *stack);
t_block				*create_node(void);
t_block				*create_stack(int argc, char **argv);
t_block				*push_to_stack(long long number, t_block *stack);
t_block				*push_list(t_block *stack);

long long			pop_number(t_block *stack);
unsigned int		list_length(t_block *head);
int					is_verify(char *line);
int					ft_checking_numbers(char **str);

void				reading_instr(t_block **stack1,
		t_block **stack2, int accept);
void				ft_instr(t_block **stack, int accept);
void				ft_instr_both(t_block **stack1, t_block **stack2, int accept);
void				swap_data(t_block **head);
void				rotate_normal(t_block **stack);
void				rotate_reverse(t_block **stack);
void				push(t_block **lstsrc, t_block **lstdst);

int					dup_nums(t_block *stack);
int					compare(long long num1, long long num2);
int					is_sorted(t_block *stack);
int         		small_number(t_block *stack);
int         		top_bottom(t_block *stack, long long small, unsigned int split);
int         		big_number(t_block *stack_a);
int					int_max(t_block *stack);
int					is_sorted_b(t_block *stack);

void				loop_stack_1(t_block **stack_a, t_block **stack_b);
void        		loop_stack_2(t_block **stack_a, t_block **stack_b);
void        		three_nums(t_block **stack_a);
void				more_nums(t_block **stack_a, long long small, unsigned int split);
void				push_swap(t_block **stack_a, t_block **stack_b);
#endif
