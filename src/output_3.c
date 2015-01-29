t_data			*build_maj_d(void)
{
	int				val;
	char			*tmp;

	val = va_arg(VARS, int);
	tmp = ft_itoa(val);
	return (create_data(tmp, NULL));
}

t_data			*build_maj_o(void)
{
	int				val;
	char			*tmp;

	val = va_arg(VARS, int);
	tmp = octal_string((unsigned int)val);
	return (create_data(tmp, NULL));
}

t_data			*build_maj_u(void)
{
	int				val;
	char			*tmp;

	val = va_arg(VARS, int);
	tmp = ft_uitoa((unsigned int)val);
	return (create_data(tmp, NULL));
}

t_data			*build_maj_x(void)
{
	int				val;
	char			*tmp;

	val = va_arg(VARS, int);
	tmp = hexa_string((unsigned int)val, FALSE);
	return (create_data(tmp, NULL));
}
