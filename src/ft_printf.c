#include "../include/ft_printf.h"
#include "../libft/includes/libft.h"
#include "../ft_list/ft_list.h"
#include <stdarg.h>

int				ft_printf(const char* str, ...)
{
	int				printed;
	char			*tmp;

	tmp = ft_strdup(str);
	get_glob(0);
	va_start(VARS, str);
	while (tmp[LEFT_I])
	{
		LEFT_I = RIGHT_I;
		while (tmp[RIGHT_I] && tmp[RIGHT_I] != '%')
			RIGHT_I++;
		if (!tmp[RIGHT_I])
		{
			list_pushback(&OUTPUT, create_data(ft_strdup(tmp + LEFT_I), NULL));
			break ;
		}
		else
		{
			tmp[RIGHT_I] = '\0';
			list_pushback(&OUTPUT, create_data(ft_strdup(tmp + LEFT_I), NULL));
			process_format(tmp);
		}
	}
	printed = print_output(OUTPUT);
	va_end(VARS);
	//clear_output(&OUTPUT);
	get_glob(1);
	free(tmp);
	return (printed);
}
