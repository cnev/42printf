#ifndef FT_PRINTF_H
# define FT_PRINTF_H

typedef struct		s_glob
{
	unsigned int	left_i = 0;
	unsigned int	right_i = 0;
	t_list			*list = 0;
	va_list			vars;
}					t_glob;

#endif
