	{"s", build_s},
	{"S", build_maj_s},
	{"c", build_c},
	{"C", build_maj_c},
	{"p", build_p},

char			*build_s(void)
{
	return (ft_strdup(va_arg(VARS, char *)));
}

char			*build_maj_s(void)
{
	int				val;

	val = va_arg(VARS, int);
}
