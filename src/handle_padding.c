#include "../include/ft_printf.h"
#include "../libft/includes/libft.h"
#include <stdlib.h>

static char			*do_zero(char *str, t_info *info)
{
	char			*tmp;
	int				i;

	if (info->precision <= 0 || info->width < (int)ft_strlen(str))
		return (str);
	if (!(tmp = (char *)malloc(sizeof(char) * (1 + info->width))))
		return (NULL);
	i = -1;
	while (++i < (int)(info->width - ft_strlen(str)))
		tmp[i] = '0';
	ft_strcpy(tmp + info->width - ft_strlen(str), str);
	tmp[info->width] = '\0';
	free(str);
	return (tmp);
}

static char			*do_minus(char *str, t_info *info)
{
	char			*tmp;
	int				i;

	if (info->width < (int)ft_strlen(str))
		return (str);
	if (!(tmp = (char *)malloc(sizeof(char) * (1 + info->width))))
		return (NULL);
	ft_strcpy(tmp, str);
	i = ft_strlen(str) - 1;
	while (++i < info->width)
		tmp[i] = ' ';
	tmp[info->width] = '\0';
	free(str);
	return (tmp);
}

char				*do_padding(char *str, t_info *info)
{
	if (info->flag_minus && is_format(info->format,  "dDoOuUxX"))
		return (do_minus(str, info));
	if (info->flag_zero)
		return (do_zero(str, info));
	return (str);
}
