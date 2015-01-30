#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define LEFT_I		(get_glob(0))->left_i
# define RIGHT_I	(get_glob(0))->right_i
# define OUTPUT		(get_glob(0))->list
# define VARS		(get_glob(0))->vars
# define TRUE		1
# define FALSE		0
# include <wchar.h>
# include <stdint.h>

typedef struct		s_data
{
	int				is_wchar;
	char			*str;
	wchar_t			*w_str;
}					t_data;

typedef struct		s_list
{
	struct s_list	*next;
	t_data			*data;
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

typedef struct		s_outputft
{
	char			*format;
	t_data			*(*f)(void);
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
** field_width.c
*/
void				find_field_width(const char *str, t_info *info);

/*
** flags.c
*/
void				find_flags(const char *str, t_info *info);

/*
** format.c
*/
void				find_format(const char *str, t_info *info);

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
** ft_uitoa_1.c
*/
char				*ft_uitoa(unsigned int val);

/*
** ft_uitoa_2.c
*/
char				*ft_uitoa_size_t(size_t val);

/*
** ft_uitoa_3.c
*/
char				*ft_uitoa_intmax_t(intmax_t val);

/*
** handle_padding.c
*/
char				*do_padding(char *str, t_info *info);

/*
** handle_precision.c
*/
char				*do_precision(char *str, t_info *info);

/*
** handle_sharp.c
*/
char				*do_sharp(char *str, t_info *info);

/*
** handle_sign.c
*/
char				*do_sign(char *str, t_info *info);

/*
** hexa_string_1.c
*/
char				*hexa_string(unsigned int val, int is_maj);

/*
** hexa_string_2.c
*/
char				*hexa_string_size_t(size_t val, int is_maj);

/*
** hexa_string_3.c
*/
char				*hexa_string_intmax_t(intmax_t val, int is_maj);

/*
** is_format.c
*/
int					is_format(char *format, char *possibles);

/*
** length_mod.c
*/
void				find_length_mods(const char *str, t_info *info);

/*
** octal_string_1.c
*/
char				*octal_string(unsigned int val);

/*
** octal_string_2.c
*/
char				*octal_string_size_t(size_t val);

/*
** octal_string_3.c
*/
char				*octal_string_intmax_t(intmax_t val);

/*
** output_1.c
*/
t_data				*build_s(void);
t_data				*build_maj_s(void);
t_data				*build_c(void);
t_data				*build_maj_c(void);
t_data				*build_p(void);

/*
** output_2.c
*/
t_data				*build_d(void);
t_data				*build_o(void);
t_data				*build_u(void);
t_data				*build_x(void);
t_data				*build_pct(void);

/*
** output_3.c
*/
t_data				*build_maj_d(void);
t_data				*build_maj_o(void);
t_data				*build_maj_u(void);
t_data				*build_maj_x(void);

/*
** output_h.c
*/
t_data				*build_hd(void);
t_data				*build_ho(void);
t_data				*build_hu(void);
t_data				*build_hx(void);
t_data				*build_h_maj_x(void);

/*
** output_hh.c
*/
t_data				*build_hhd(void);
t_data				*build_hho(void);
t_data				*build_hhu(void);
t_data				*build_hhx(void);
t_data				*build_hh_maj_x(void);

/*
** output_l.c
*/
t_data				*build_ld(void);
t_data				*build_lo(void);
t_data				*build_lu(void);
t_data				*build_lx(void);
t_data				*build_l_maj_x(void);

/*
** output_ll.c
*/
t_data				*build_lld(void);
t_data				*build_llo(void);
t_data				*build_llu(void);
t_data				*build_llx(void);
t_data				*build_ll_maj_x(void);

/*
** output_main.c
*/
t_data				*build_output(t_info *info);

/*
** precision.c
*/
void				find_precision(const char *str, t_info *info);

/*
** printing.c
*/
int					print_output(t_list *output);

/*
** singleton.c
*/
t_glob				*get_glob(int mode);

/*
** variables.c
*/
void				process_format(const char *str);

/*
** widechar.c
*/
size_t				ft_wcstrlen(wchar_t *str);


#endif
