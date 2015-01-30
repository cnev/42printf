#include "../include/ft_printf.h"
#include "../libft/includes/libft.h"
#include <stdlib.h>

void				find_precision(const char *str, t_info *info)
{
	char				*precision;

	if (str[RIGHT_I] && str[RIGHT_I] == '.')
	{
		RIGHT_I++;
		while (str[RIGHT_I] && ft_isdigit(str[RIGHT_I]))
			RIGHT_I++;
		precision = (char *)malloc(sizeof(char) * (RIGHT_I - LEFT_I));
		precision = ft_strncpy(precision, str + LEFT_I + 1, RIGHT_I - LEFT_I);
		LEFT_I = RIGHT_I;
		info->precision = ft_atoi(precision);
		free(precision);
	}
}
