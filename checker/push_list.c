#include "check.h"

block		*push_list(block *stack)
{
	block *temp;

	if (stack == NULL)
		return (NULL);
	temp = stack;
	stack = stack->next;
	free(temp);
	return (stack);

}
