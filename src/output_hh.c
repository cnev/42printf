#include "../include/ft_printf.h"

t_data			*build_hhd(void)
{
	char			val;
	char			*tmp;

	val = va_arg(VARS, char);
	tmp = ft_itoa((int)val);
	return (create_data(tmp, NULL));
}

t_data			*build_hho(void)
{
	char			val;
	char			*tmp;

	val = va_arg(VARS, char);
	tmp = octal_string((unsigned int)val);
	return (create_data(tmp, NULL));
}

t_data			*build_hhu(void)
{
	char			val;
	char			*tmp;

	val = va_arg(VARS, char);
	tmp = ft_uitoa((unsigned int)val);
	return (create_data(tmp, NULL));
}

t_data			*build_hhx(void)
{
	char			val;
	char			*tmp;

	val = va_arg(VARS, char);
	tmp = hexa_string((unsigned int)val, FALSE);
	return (create_data(tmp, NULL));
}

t_data			*build_hh_maj_x(void)
{
	char			val;
	char			*tmp;

	val = va_arg(VARS, char);
	tmp = hexa_string((unsigned int)val, FALSE);
	return (create_data(tmp, NULL));
}
