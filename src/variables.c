static void		init_info(t_info *info)
{
	info->flag_sharp = 0;
	info->flag_zero = 0;
	info->flag_minus = 0;
	info->flag_plus = 0;
	info->flag_space = 0;
	info->width = 0;
	info->precision = 0;
	ft_bzero(info->format, 4);
}

void			process_format(const char *str)
{
	t_info			info;
	char			*tmp;

	RIGHT_I += 2;
	LEFT_I += 2;
	find_flags(str, &info);
	find_field_width(str, &info);
	find_precision(str, &info);
	find_length_mods(str, &info);
	find_format(str, &info);
	tmp = build_output(&info);
	list_pushback(&(OUTPUT), tmp);
}

