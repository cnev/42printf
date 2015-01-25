#include "../includes/ft_printf.h"
#include <stdarg.h>

int				ft_printf(const char* str, ...)
{
	t_glob			*glob;
	int				printed;

	glob = get_glob();
	va_start(VARS, str);
	while (str[LEFT_I])
	{
		RIGHT_I = LEFT_I;
		while (str[RIGHT_I] && str[RIGHT_I] != '%')
			RIGHT_I++;
		if (!str[RIGHT_I])
			list_pushback(&list, ft_strdup(str + LEFT_I));
		else
		{
			str[RIGHT_I] = '\0';
			list_pushback(&list, ft_strdup(str + LEFT_I));
			process_format(str);
		}
	}
	//printed = print_output();
	//va_end();
	get_glob(1);
	return (0 /* printed */);
}
