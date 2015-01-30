#include "../include/ft_printf.h"
#include "../libft/includes/libft.h"
#include <stdlib.h>

char				*do_sign(char *str, t_info *info)
{
	char			*tmp;

	if (info->flag_plus && str[0] != '-')
	{
		tmp = ft_strjoin("+", str);
		free(str);
		return (tmp);
	}
	if (info->flag_space && str[0] != '-')
	{
		tmp = ft_strjoin(" ", str);
		free(str);
		return (tmp);
	}
	return (str);
}
