#include "../include/ft_printf.h"
#include "../libft/includes/libft.h" /* YO NORM ERASE THOS*/

t_data			*build_d(void)
{
	int				val;
	char			*tmp;

	val = va_arg(VARS, int);
	tmp = ft_itoa(val);
	return (create_data(tmp, NULL));
}

t_data			*build_o(void)
{
	unsigned int	val;
	char			*tmp;

	val = va_arg(VARS, unsigned int);
	tmp = octal_string(val);
	return (create_data(tmp, NULL));
}

t_data			*build_u(void)
{
	unsigned int	val;
	char			*tmp;

	val = va_arg(VARS, unsigned int);
	tmp = ft_uitoa(val);
	return (create_data(tmp, NULL));
}

t_data			*build_x(void)
{
	unsigned int	val;
	char			*tmp;

	val = va_arg(VARS, unsigned int);
	tmp = hexa_string(val, FALSE);
	return (create_data(tmp, NULL));
}

t_data			*build_pct(void)
{
	return (create_data(ft_strdup("%"), NULL));
}
