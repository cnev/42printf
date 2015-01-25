#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define LEFT_I		(get_glob(0))->left_i
# define RIGHT_I	(get_glob(0))->right_i
# define OUTPUT		(get_glob(0))->list
# define VARS		(get_glob(0))->vars

typedef struct		s_glob
{
	unsigned int	left_i = 0;
	unsigned int	right_i = 0;
	t_list			*list = 0;
	va_list			vars;
}					t_glob;

/*
** ft_printf.c
*/
int					ft_printf(const char* str, ...);

/*
** variables.c
*/
void				process_format(char *str);

#endif
