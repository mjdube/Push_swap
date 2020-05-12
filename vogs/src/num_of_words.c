#include "push_swap.h"

static int	check(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

size_t		num_of_words(const char *str)
{
	size_t  i;
	size_t  words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (check(str[i]))
			i++;
		else
		{
			if (str[i] != '\0')
				words++;
			while (!check(str[i]) && str[i])
				i++;
		}
	}
	return (words);
}