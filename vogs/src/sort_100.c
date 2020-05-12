#include "push_swap.h"

void			sorting(t_block **stack_a, t_block **stack_b, int loop)
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
		if (loop == 1)
			break ;
		while ((*stack_a)->data > middle_1)
        {
            rotate_normal((*(&stack_a)));
            ft_putendl("ra");
        }
		while ((*stack_a)->data <= middle_1)
        {
            push((*(&stack_a)), (*(&stack_b)));
            ft_putendl("pb");
        }
	}
}

void			sort_100(t_block **stack_a, t_block **stack_b)
{
	sorting(stack_a, stack_b, 2);
	config(stack_a, stack_b);
	reverse_sorting(stack_a, stack_b);
}