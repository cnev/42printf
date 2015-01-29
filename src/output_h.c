
t_data			*build_hd(void)
{
	short			val;
	char			*tmp;

	val = va_arg(VARS, short);
	tmp = ft_itoa((int)val);
	return (create_data(tmp, NULL));
}

t_data			*build_ho(void)
{
	short			val;
	char			*tmp;

	val = va_arg(VARS, short);
	tmp = octal_string((unsigned int)val);
	return (create_data(tmp, NULL));
}

t_data			*build_hu(void)
{
	short			val;
	char			*tmp;

	val = va_arg(VARS, short);
	tmp = ft_uitoa((unsigned int)val);
	return (create_data(tmp, NULL));
}

t_data			*build_hx(void)
{
	short			val;
	char			*tmp;

	val = va_arg(VARS, short);
	tmp = hexa_string((unsigned int)val, FALSE);
	return (create_data(tmp, NULL));
}

t_data			*build_h_maj_x(void)
{
	short			val;
	char			*tmp;

	val = va_arg(VARS, short);
	tmp = hexa_string((unsigned int)val, FALSE);
	return (create_data(tmp, NULL));
}
