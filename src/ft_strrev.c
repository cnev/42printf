#include "../include/ft_printf.h"
#include "../libft/includes/libft.h"

char			*ft_strrev(char *str)
{
	int				i;
	int				len;
	char			tmp;

	i = -1;
	len = strlen(str);
	while (++i < --len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
	}
	return (str);
}
