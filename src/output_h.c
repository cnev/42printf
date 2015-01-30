#include "../include/ft_printf.h"

t_data			*build_hd(void)
{
	int				val;
	char			*tmp;

	val = va_arg(VARS, int);
	tmp = ft_itoa((int)val);
	return (create_data(tmp, NULL));
}

t_data			*build_ho(void)
{
	int				val;
	char			*tmp;

	val = va_arg(VARS, int);
	tmp = octal_string((unsigned int)val);
	return (create_data(tmp, NULL));
}

t_data			*build_hu(void)
{
	int				val;
	char			*tmp;

	val = va_arg(VARS, int);
	tmp = ft_uitoa((unsigned int)val);
	return (create_data(tmp, NULL));
}

t_data			*build_hx(void)
{
	int				val;
	char			*tmp;

	val = va_arg(VARS, int);
	tmp = hexa_string((unsigned int)val, FALSE);
	return (create_data(tmp, NULL));
}

t_data			*build_h_maj_x(void)
{
	int				val;
	char			*tmp;

	val = va_arg(VARS, int);
	tmp = hexa_string((unsigned int)val, FALSE);
	return (create_data(tmp, NULL));
}
