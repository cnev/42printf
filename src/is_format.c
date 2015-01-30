#include "../include/ft_printf.h"
#include "../libft/includes/libft.h"

int				is_format(char *format, char *possibles)
{
	int				i;

	i = -1;
	while (possibles[++i])
	{
		if (ft_strchr(format, possibles[i]))
			return (TRUE);
	}
	return (FALSE);
}
