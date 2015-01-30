#include "../include/ft_printf.h"

t_data			*build_lld(void)
{
	long			val;
	char			*tmp;

	val = va_arg(VARS, long);
	tmp = hexa_string((unsigned int)val, FALSE);
	return (create_data(tmp, NULL));
}

t_data			*build_llo(void)
{
	long			val;
	char			*tmp;

	val = va_arg(VARS, long);
	tmp = hexa_string((unsigned int)val, FALSE);
	return (create_data(tmp, NULL));
}

t_data			*build_llu(void)
{
	long			val;
	char			*tmp;

	val = va_arg(VARS, long);
	tmp = hexa_string((unsigned int)val, FALSE);
	return (create_data(tmp, NULL));
}

t_data			*build_llx(void)
{
	long			val;
	char			*tmp;

	val = va_arg(VARS, long);
	tmp = hexa_string((unsigned int)val, FALSE);
	return (create_data(tmp, NULL));
}

t_data			*build_ll_maj_x(void)
{
	long			val;
	char			*tmp;

	val = va_arg(VARS, long);
	tmp = hexa_string((unsigned int)val, FALSE);
	return (create_data(tmp, NULL));
}
