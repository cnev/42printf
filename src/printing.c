#include "../include/ft_printf.h"
#include "../libft/includes/libft.h"
#include <unistd.h>

int					print_output(t_list *output)
{
	t_data			*tmpdata;
	int				nb;

	nb = 0;
	while (output)
	{
		tmpdata = (t_data *)output->data;
		if (tmpdata->is_wchar)
		{
			write(1, tmpdata->w_str, ft_wcstrlen(tmpdata->w_str));
			nb += ft_wcstrlen(tmpdata->w_str);
		}
		else
		{
			write(1, tmpdata->str, ft_strlen(tmpdata->str));
			nb += ft_strlen(tmpdata->str);
		}
		output = output->next;
	}
	return (nb);
}
