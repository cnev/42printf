void			find_field_width(char *str, t_info *info)
{
	char			*field_width;

	while (str[LEFT_I] && ft_isdigit(str[LEFT_I]))
		LEFT_I++;
	field_width = (char *)malloc(sizeof(char) * (LEFT_I - RIGHT_I));
	field_width = ft_strncpy(field_width, str + RIGHT_I, LEFT_I - RIGHT_I);
	RIGHT_I = LEFT_I;
	info->width = ft_atoi(field_width);
}