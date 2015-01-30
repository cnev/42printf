#include "../include/ft_printf.h"
#include "../libft/includes/libft.h"
#include "../ft_list/ft_list.h"

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

void scan_this(void)
{
	t_list *tmp = OUTPUT;
	t_data *data;
	while (tmp)
	{
		data = (t_data*)(tmp->data);
		ft_putstr("ELEM: [");
		ft_putstr(data->str);
		ft_putendl("]");
		tmp = tmp->next;
	}
}

void			process_format(const char *str)
{
	t_info			info;
	t_data			*tmp;

	RIGHT_I++;
	LEFT_I++;
	init_info(&info);
	find_flags(str, &info);
	find_field_width(str, &info);
	find_precision(str, &info);
	find_format(str, &info);
	tmp = build_output(&info);
	list_pushback(&(OUTPUT), create_data(tmp->str, NULL));
}

