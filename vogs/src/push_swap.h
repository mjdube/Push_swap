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
	long			data;
	struct s_node	*next;
}					t_block;

typedef struct		v_node
{
	int				equal;
	int				min_1;
	int				min_2;
	int				position;
}					t_values;

t_block				*create_stack_a(t_block *stack);
t_block				*create_node(void);
t_block				*create_stack(char **arr);
t_block				*push_to_stack(int number, t_block *stack);
t_block				*push_list(t_block *stack);

int					pop_number(t_block *stack);
unsigned int		list_length(t_block *head);
int					is_verify(char *line);
int					ft_checking_numbers(char **argv);

void				reading_instr(t_block **stack1,
		t_block **stack2, int accept);
void				ft_instr(t_block **stack, int accept);
void				ft_instr_both(t_block **stack1, t_block **stack2, int accept);
void				swap_data(t_block **head);
void				rotate_normal(t_block **stack);
void				rotate_reverse(t_block **stack);
void				push(t_block **lstsrc, t_block **lstdst);
void				empty_stack(t_block **stack);

int					dup_nums(char **argv, char *to_find, int pos);
size_t				num_of_words(const char *str);
int					compare(int num1, int num2);
int					is_sorted(t_block *stack);
int         		small_number(t_block *stack);
int         		top_bottom(t_block *stack, int num, unsigned int split);
int         		big_number(t_block *stack_a);
int					int_max(char *str);
int					is_sorted_b(t_block *stack);

int					min_value(t_block *list);
int					max_value(t_block *list);
int					min_pos(t_block *list, int min);
int					ft_pos(t_block *list, int min, int n_min, int p);
int					search(t_block *list, int m);

void				reverse_sorting(t_block **stack_a, t_block **stack_b);
void				config(t_block **stack_a, t_block **stack_b);
void				sort_500(t_block **stack_a, t_block **stack_b);
void				sort_100(t_block **stack_a, t_block **stack_b);
void				loop_stack_1(t_block **stack_a, t_block **stack_b);
void        		loop_stack_2(t_block **stack_a, t_block **stack_b);
void				loop_stack(t_block **stack_a, t_block **stack_b);
void        		three_nums(t_block **stack_a);
void				more_nums(t_block **stack_a, int small, unsigned int split);
void				more_nums_2(t_block **stack_a, t_block **stack_b);
void				push_swap(t_block **stack_a, t_block **stack_b);
void				rb_sb_rrb(t_block **stack);
void				pa_sb_pb(t_block **stack_a, t_block **stack_b);
void				sb_sort_sb(t_block **stack_a, t_block **stack_b);
int					find_middle(t_block *list, int num, int loop);

#endif
