#include "../include/ft_printf.h"
#include <stdlib.h>
#include <wchar.h>

t_data				*create_data(char *str, wchar_t *w_str)
{
	t_data				*data;

	if (!str && w_str)
	{
		data->is_wchar = TRUE;
		data->str = NULL;
		data->w_str = w_str;
	}
	else if (!w_str && str)
	{
		data->is_wchar = FALSE;
		data->str = str;
		data->w_str = NULL;
	}
	else
		return (NULL);
	return (data);
}
