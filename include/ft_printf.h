#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define LEFT_I		(get_glob(0))->left_i
# define RIGHT_I	(get_glob(0))->right_i
# define OUTPUT		(get_glob(0))->list
# define VARS		(get_glob(0))->vars
# define TRUE		1
# define FALSE		0

typedef struct		s_glob
{
	unsigned int	left_i = 0;
	unsigned int	right_i = 0;
	t_list			*list = 0;
	va_list			vars;
}					t_glob;

typedef struct		s_info
{
	int				flag_sharp;
	int				flag_zero;
	int				flag_minus;
	int				flag_plus;
	int				flag_space;
	int				width;
	int				precision;
}					t_info;

/*
** ft_printf.c
*/
int					ft_printf(const char* str, ...);

/*
** variables.c
*/
void				process_format(const char *str);

/*
** flags.c
*/
void				find_flags(const char *str, t_info *info);

/*
** field_width.c
*/
void				find_field_width(const char *str, t_info *info);

/*
** precision.c
*/
void				find_precision(const char *str, t_info *info);

/*
** length_mod.c
*/
void				find_length_mods(const char *str, t_info *info);

/*
** format.c
*/
void				find_format(const char *str, t_info *info);

/*
** output_main.c
*/
char				*build_output(t_info *info);

#endif
