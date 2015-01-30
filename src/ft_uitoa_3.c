#include "../include/ft_printf.h"
#include "../libft/includes/libft.h"
#include <stdlib.h>
#include <inttypes.h>

static int		int_len(intmax_t val)
{
	int				i;

	i = 0;
	while (val > 0)
	{
		i++;
		val /= 10;
	}
	return (i);
}

char			*ft_uitoa_intmax_t(intmax_t val)
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
		tmp[i++] = val % 10 + '0';
		val /= 10;
	}
	tmp[i] = '\0';
	return (ft_strrev(tmp));
}
