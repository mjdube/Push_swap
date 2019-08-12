#include "check.h"

block		*push_to_stack(int number, block *stack)
{
	block	*temp;
	if (stack == NULL)
	{
		temp = createNode();
		temp->data = number;
		return (temp);
	}
	temp = createNode();
	temp->data = number;
	temp->next = stack;
	return (temp);
}
