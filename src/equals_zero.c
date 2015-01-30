#include "../include/ft_printf.h"

int				equals_zero(char *str)
{
	int				i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= '1' && str[i] <= '9')
			return (FALSE);
	}
	return (TRUE);
}
