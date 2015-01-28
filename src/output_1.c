	{"s", build_s},
	{"S", build_maj_s},
	{"c", build_c},
	{"C", build_maj_c},
	{"p", build_p},

char			*build_s(void)
{
	return (ft_strdup(va_arg(VARS, char *)));
}

/* tmp to move to libft or anywhere */
size_t			*ft_wcstrlen(wchar_t *str)
{
	int				i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

wchar_t			*ft_wcstrdup(wchar_t *str)
{

}

char			*build_maj_s(void)
{
	wchar_t			*val;

	val = va_arg(VARS, wchar_t *);
}
