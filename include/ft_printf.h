#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define LEFT_I		(get_glob(0))->left_i
# define RIGHT_I	(get_glob(0))->right_i
# define OUTPUT		(get_glob(0))->list
# define VARS		(get_glob(0))->vars
# define TRUE		1
# define FALSE		0
# include <wchar.h>

typedef struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

typedef struct		s_glob
{
	unsigned int	left_i;
	unsigned int	right_i;
	t_list			*list;
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
	char			format[4];
}					t_info;

typedef struct		s_data
{
	int				is_wchar;
	char			*str;
	wchar_t			*w_str;
}					t_data;

typedef struct		s_outputft
{
	char			*format;
	char			(*f)(void);
}					t_outputft;

/*
** data.c
*/
t_data				*create_data(char *str, wchar_t *w_str);

/*
** equals_zero.c
*/
int					equals_zero(char *str);

/*
** ft_itoa.c
*/
char				*ft_itoa(int val);

/*
** ft_printf.c
*/
int					ft_printf(const char* str, ...);

/*
** ft_strrev.c
*/
char				*ft_strrev(char *str);

/*
** is_format.c
*/
int					is_format(char *format, char *possibles);
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

/*
** singleton.c
*/
t_glob				*get_glob(int mode);

/*
** widechar.c
*/
size_t				ft_wcstrlen(wchar_t *str);


#endif
