void			process_format(const char *str)
{
	t_info			info;
	char			*tmp;

	find_flags(str, &info);
	find_field_width(str, &info);
	find_precision(str, &info);
	find_length_mods(str, &info);
	find_format(str, &info);
	tmp = build_output(&info);
	list_pushback(&(OUTPUT), tmp);
}
