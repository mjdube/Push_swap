#include "push_swap.h"

static void		sorting(t_block **stack_a, t_block **stack_b, int loop)
{
	int middle_1;
	int	middle_2;

	middle_1 = find_middle(*stack_a, 1, loop);
	middle_2 = find_middle(*stack_a, 1, loop * 2);
	while ((*stack_a)->next)
	{
		if (search(*stack_a, middle_1) == 0)
		{
			loop--;
			middle_1 = find_middle(*stack_a, 1, loop);
			middle_2 = find_middle(*stack_a, 1, loop * 2);
		}
		if (loop == 0)
			break ;
		while ((*stack_a)->data > middle_1)
		{
			rotate_normal((*(&stack_a)));
			ft_putendl("ra");
		}	
		if ((*stack_a)->data <= middle_1 && (*stack_a)->data >= middle_2)
		{
			push((*(&stack_a)), (*(&stack_b)));
			ft_putendl("pb");
		}
		else if ((*stack_a)->data <= middle_1 && (*stack_a)->data <= middle_2)
		{
			push(stack_a,stack_b);
			ft_putendl("pb");
			rotate_normal(stack_b);
			ft_putendl("rb");
		}
	}
}

void			sort_500(t_block **stack_a, t_block **stack_b)
{
	sorting(stack_a, stack_b, 5);
	while ((*stack_b)->next)
	{
		push((*(&stack_b)), (*(&stack_a)));
		ft_putendl("pa");
	}
	config(stack_a, stack_b);
	reverse_sorting(stack_a, stack_b);
}