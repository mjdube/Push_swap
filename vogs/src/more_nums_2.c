#include "push_swap.h"

void	pa_sb_pb(t_block **stack_a, t_block **stack_b)
{
    push(stack_b, stack_a);
    ft_putendl("pa");
    swap_data(stack_b);
    ft_putendl("sb");
    push(stack_a, stack_b);
    ft_putendl("pb");
}

void	sb_sort_sb(t_block **stack_a, t_block **stack_b)
{
    swap_data(stack_b);
    ft_putendl("sb");
    pa_sb_pb(stack_a, stack_b);
    swap_data(stack_b);
    ft_putendl("sb");
}

void	more_nums_2(t_block **stack_a, t_block **stack_b)
{
	int num1;
	int num2;

	num1 = (*stack_b)->next->data;
	num2 = (*stack_b)->next->next->data;
	if ((*stack_b)->data > num1 && num1 > num2)
		return ;
	if (list_length(*stack_b) == 2 && (*stack_b)->data < num2)
	{
        swap_data(stack_b);
        ft_putendl("sb");
	}
	else if ((*stack_b)->data > num1 && num1 < num2 && (*stack_b)->data > num1)
	{	
        pa_sb_pb(stack_a, stack_b);
	}
	else if ((*stack_b)->data < num1 && num1 < num2)
	{
        sb_sort_sb(stack_a, stack_b);
	}	
	else if ((*stack_b)->data < num1 && num1 > num2 && (*stack_b)->data < num2)
	{
        pa_sb_pb(stack_a, stack_b);
        swap_data(stack_b);
        ft_putendl("sb");
	}
	else if ((*stack_b)->data > num1 && num1 < num2 && (*stack_b)->data < num2)
	{
        pa_sb_pb(stack_a, stack_b);
        swap_data(stack_b);
        ft_putendl("sb");
	}
	else if ((*stack_b)->data < num1 && num1 > num2 && (*stack_b)->data > num2)
	{	
        swap_data(stack_b);
        ft_putendl("sb");
	}
}