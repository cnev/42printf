#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define LEFT_I		(get_glob())->left_i
# define RIGHT_I	(get_glob())->right_i
# define OUTPUT		(get_glob())->list
# define VARS		(get_glob())->vars

typedef struct		s_glob
{
	unsigned int	left_i = 0;
	unsigned int	right_i = 0;
	t_list			*list = 0;
	va_list			vars;
}					t_glob;

#endif
