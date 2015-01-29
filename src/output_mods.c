char		*do_sharp(char *str, t_info *info)
{
	char			*tmp;

	if (!info->flag_sharp)
		return (str);
	if (FT_STRFIND(info->format, "o") && str[0] != '0')
	{
		tmp = ft_prepend(str, "0");
		free(str);
		return (tmp);
	}
	if (FT_STRFIND(info->format, "x") && str[0] != '0')
	{
		tmp = ft_prepend(str, "0x");
		free(str);
		return (tmp);
	}
	if (FT_STRFIND(info->format, "X") && str[0] != '0')
	{
		tmp = ft_prepend(str, "0X");
		free(str);
		return (tmp);
	}
	return (str);
}

char		*do_zero(char *str, t_info *info)
{
	char			*tmp;
	int				i;

	if (!info->flag_zero || (info->flag_zero && info->flag_minus))
		return (str);
	if (precision <= 0 || info->width < ft_strlen(str))
		return (str);
	if (FIND_THIS(info->format, "dDoOuUxX"))
	{
		if (!(tmp = (char *)malloc(sizeof(char) * (1 + info->width))))
			return (NULL);
		i = -1;
		while (++i < info->width - ft_strlen(str))
			tmp[i] = '0';
		ft_strcpy(tmp + info->width - ft_strlen(str), str);
		tmp[info->width] = '\0';
		free(str);
		return (tmp);
	}
	return (str);
}

char		*do_minus(char *str, t_info *info)
{
	char			*tmp;
	int				i;

	if (!info->flag_minus || info->width < ft_strlen(str))
		return (str);
	if (FIND_THIS(info->format, "dDoOuUxX"))
	{
		if (!(tmp = (char *)malloc(sizeof(char) * (1 + info->width))))
			return (NULL);
		ft_strcpy(tmp, str);
		i = ft_strlen(str) - 1;
		while (++i < info->width)
			tmp[i] = ' ';
		tmp[info->width] = '\0';
		free(str);
		return (tmp);
	}
	return (str);
}

char		*do_plus(char *str, t_info *info)
{
	char			*tmp;
	int				i;

	if (!info->flag_plus || str[0] == '-')
		return (str);
	if (FIND_THIS(info->format, "dDoOuUxX"))
	{
		tmp = ft_prepend(str, "+");
		free(str);
		return (tmp);
	}
	return (str);
}

char		*do_space(char *str, t_info *info)
{
	char			*tmp;
	int				i;

	if (!info->flag_plus || (info->flag_space && info->flag_plus))
		return (str);
	if (str[0] == '-')
		return (str);
	if (FIND_THIS(info->format, "dDoOuUxX"))
	{
		tmp = ft_prepend(str, " ");
		free(str);
		return (tmp);
	}
	return (str);
}



