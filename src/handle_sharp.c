#include "../include/ft_printf.h"
#include "../libft/includes/libft.h"
#include <stdlib.h>

char		*do_sharp(char *str, t_info *info)
{
	char			*tmp;

	if (!info->flag_sharp)
		return (str);
	if (is_format(info->format, "o") && equals_zero(str))
	{
		tmp = ft_strjoin("0", str);
		free(str);
		return (tmp);
	}
	if (is_format(info->format, "xp") && equals_zero(str))
	{
		tmp = ft_strjoin("0x", str);
		free(str);
		return (tmp);
	}
	if (is_format(info->format, "X") && equals_zero(str))
	{
		tmp = ft_strjoin("0X", str);
		free(str);
		return (tmp);
	}
	return (str);
}
