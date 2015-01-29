void				find_precision(const char *str, t_info *info)
{
	char				*precision;

	if (str[RIGHT_I] && str[RIGHT_I] == '.')
	{
		RIGHT_I++;
		while (str[RIGHT_I] && ft_isdigit(str[RIGHT_I]))
			RIGHT_I++;
		precision = (char *)malloc(sizeof(char) * (RIGHT_I - LEFT_I));
		precision = ft_strncpy(precision, str + LEFT_I + 1, RIGHT_I - LEFT_I);
		LEFT_I = RIGHT_I;
		info->precision = ft_atoi(precision);
		free(precision);
	}
}

int					find_this(char *format, char *possibles)
{
	int				i;

	i = -1;
	while (possibles[++i])
	{
		if (strchr(format, possibles[i]))
			return (TRUE);
	}
	return (FALSE);
}

static int			count_digits(const char *str, int is_hex)
{
	if (!is_hex)
	{
		if (str[0] == '-')
			return (ft_strlen(str + 1));
		else
			return (ft_strlen(str));
	}
	else
	{
		if (str[0] == '0' && (str[1] == 'x' || str[1] == 'X'))
			return (ft_strlen(str + 2));
		else
			return (ft_strlen(str));
	}
	return (-1);
}

static char			*zero_pad(char *str, t_info *info)
{
	int				i;
	char			*tmp;

	if (!(tmp = (char *)malloc(sizeof(char) * (1 + info->precision))))
		return (NULL);
	i = -1;
	while (++i < info->precision - ft_strlen(str))
		tmp[i] = '0';
	ft_strcpy(tmp + info->precision - ft_strlen(str), str);
	tmp[info->precision] = '\0';
	free(str);
	return (tmp);
}

char				*do_precision(char *str, t_info *info)
{
	int				i;
	int				len;

	if (info->precision <= 0)
		return (str);
	if (FIND_THIS(info->format, "dDoOuU"))
		len = count_digits(str, FALSE);
	else if (FIND_THIS(info->format, "xX"))
		len = count_digits(str, TRUE);
	else
		return (str);
	if (info->precision > len)
		return (zero_pad(str, info));
	return (str);
}
