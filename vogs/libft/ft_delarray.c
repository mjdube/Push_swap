#include "libft.h"

void	ft_delarray(char **array)
{
	int i;

	i = 0;
	while (array[i])
		i++;
	i--;
	while (i >= 0)
	{
		ft_strdel(&array[i]);
		i--;
	}
	free(array);
	array = NULL;
}