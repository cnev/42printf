void			print_output(t_list *output)
{
	t_data			*tmpdata;

	while (output)
	{
		tmpdata = output->data;
		if (tmpdata->is_wchar)
			write(1, tmpdata->w_str, ft_wcstrlen(tmpdata->w_str));
		else
			write(1, tmpdata->str, ft_strlen(tmpdata->str));
		output = output->next;
	}
}
