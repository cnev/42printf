#include "../include/ft_printf.h"

t_data				*build_hhd(void)
{
	int				val;
	char			*tmp;

	val = va_arg(VARS, int);
	tmp = ft_itoa((int)val);
	return (create_data(tmp, NULL));
}

t_data				*build_hho(void)
{
	int				val;
	char			*tmp;

	val = va_arg(VARS, int);
	tmp = octal_string((unsigned int)val);
	return (create_data(tmp, NULL));
}

t_data				*build_hhu(void)
{
	int				val;
	char			*tmp;

	val = va_arg(VARS, int);
	tmp = ft_uitoa((unsigned int)val);
	return (create_data(tmp, NULL));
}

t_data				*build_hhx(void)
{
	int				val;
	char			*tmp;

	val = va_arg(VARS, int);
	tmp = hexa_string((unsigned int)val, FALSE);
	return (create_data(tmp, NULL));
}

t_data				*build_hh_maj_x(void)
{
	int				val;
	char			*tmp;

	val = va_arg(VARS, int);
	tmp = hexa_string((unsigned int)val, FALSE);
	return (create_data(tmp, NULL));
}
