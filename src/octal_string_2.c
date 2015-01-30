#include "../include/ft_printf.h"
#include "../libft/includes/libft.h"
#include <stdlib.h>

static int		int_len(size_t val)
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

char			*octal_string_size_t(size_t val)
{
	char			*tmp;
	int				i;
	const char		table[] = "01234567";

	if (val == 0)
		return (strdup("0"));
	if (!(tmp = (char *)malloc(sizeof(char) * (1 + int_len(val)))))
		return (NULL);
	i = 0;
	while (val > 0)
	{
		tmp[i++] = table[val % 8];
		val /= 8;
	}
	tmp[i] = '\0';
	return (ft_strrev(tmp));
}
