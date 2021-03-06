#include "../include/ft_printf.h"
#include "../libft/includes/libft.h"
#include <stdlib.h>
#include <stdint.h>

static int		int_len(intmax_t val)
{
	int				i;

	i = 0;
	while (val > 0)
	{
		i++;
		val /= 8;
	}
	return (i);
}

static char		hex_char(intmax_t val, int is_maj)
{
	const char		table[] = "0123456789abcdef";
	const char		table2[] = "0123456789ABCDEF";

	if (!is_maj)
		return (table[val]);
	return (table2[val]);
}

char			*hexa_string_intmax_t(intmax_t val, int is_maj)
{
	char			*tmp;
	int				i;


	if (val == 0)
		return (ft_strdup("0"));
	if (!(tmp = (char *)malloc(sizeof(char) * (1 + int_len(val)))))
		return (NULL);
	i = 0;
	while (val > 0)
	{
		tmp[i++] = hex_char(val % 16, is_maj);
		val /= 16;
	}
	tmp[i] = '\0';
	return (ft_strrev(tmp));
}
