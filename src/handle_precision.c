#include "../include/ft_printf.h"
#include "../libft/includes/libft.h"
#include <stdlib.h>

static int			count_digits(const char *str, int is_hex)
{
	if (!is_hex)
	{
		if (str[0] == '-')
			return (ft_strlen(str + 1));
		else
			return (ft_strlen(str));
	}
	else
	{
		if (str[0] == '0' && (str[1] == 'x' || str[1] == 'X'))
			return (ft_strlen(str + 2));
		else
			return (ft_strlen(str));
	}
	return (-1);
}

static char			*zero_pad(char *str, t_info *info)
{
	int				i;
	char			*tmp;

	if (!(tmp = (char *)malloc(sizeof(char) * (1 + info->precision))))
		return (NULL);
	i = -1;
	if (str[0] == '-')
		tmp[++i] = '-';
	while (++i < (int)(info->precision - ft_strlen(str)))
		tmp[i] = '0';
	ft_strcpy(tmp + info->precision - ft_strlen(str), str);
	tmp[info->precision] = '\0';
	free(str);
	return (tmp);
}

char				*do_precision(char *str, t_info *info)
{
	int				len;

	if (info->precision <= 0)
		return (str);
	if (is_format(info->format, "dDoOuU"))
		len = count_digits(str, FALSE);
	else if (is_format(info->format, "xX"))
		len = count_digits(str, TRUE);
	else
		return (str);
	if (info->precision > len)
		return (zero_pad(str, info));
	return (str);
}
