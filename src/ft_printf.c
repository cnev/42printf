#include "../includes/ft_printf.h"
#include <stdarg.h>

int				ft_printf(const char* str, ...)
{
	t_glob			*glob;

	glob = get_glob();
	while (str[left_i])
	{
		right_i = left_i;
		while (str[right_i] && str[right_i] != '%')
			right_i++;
		if (!str[right_i])
			list_pushback(&list, ft_strdup(str + left_i));
		else
		{
			str[right_i] = '\0';
			list_pushback(&list, ft_strdup(str + left_i));
			process_format(str);
		}
	}
}
