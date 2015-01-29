
t_data			*build_ld(void)
{
	return (build_maj_d());
}

t_data			*build_lo(void)
{
	return (build_maj_o());
}

t_data			*build_lu(void)
{
	return (build_maj_u());
}

t_data			*build_lx(void)
{
	int				val;
	char			*tmp;

	val = va_arg(VARS, int);
	tmp = hexa_string((unsigned int)val, FALSE);
	return (create_data(tmp, NULL));
}

t_data			*build_l_maj_x(void)
{
	int				val;
	char			*tmp;

	val = va_arg(VARS, int);
	tmp = hexa_string((unsigned int)val, FALSE);
	return (create_data(tmp, NULL));
}
