#include "../include/ft_printf.h"

static int			is_flag(char c, t_info *info)
{
	if (c == ' ')
		info->flag_space += 1;
	else if (c == '-')
		info->flag_minus += 1;
	else if (c == '+')
		info->flag_plus += 1;
	else if (c == '#')
		info->flag_sharp += 1;
	else if (c == '0')
		info->flag_zero += 1;
	else
		return (FALSE);
	return (TRUE);
}

void				find_flags(const char *str, t_info *info)
{
	while (str[LEFT_I] && is_flag(str[LEFT_I], info))
	{
		LEFT_I++;
		RIGHT_I++;
	}
}
