/*
	{"d", build_d},
	{"o", build_o},
	{"u", build_u},
	{"x", build_x},
*/
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
	int				val;
	char			*tmp;

	val = va_arg(VARS, int);
	tmp = ft_uitoa(val);
	return (create_data(tmp, NULL));
}
