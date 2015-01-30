#include "../include/ft_printf.h"
#include "../libft/includes/libft.h"
#include <stdlib.h>

void			find_field_width(const char *str, t_info *info)
{
	char			*field_width;

	while (str[RIGHT_I] && ft_isdigit(str[RIGHT_I]))
		RIGHT_I++;
	field_width = (char *)malloc(sizeof(char) * (RIGHT_I - LEFT_I + 1));
	field_width = ft_strncpy(field_width, str + LEFT_I, RIGHT_I - LEFT_I);
	LEFT_I = RIGHT_I;
	info->width = ft_atoi(field_width);
	free(field_width);
}
