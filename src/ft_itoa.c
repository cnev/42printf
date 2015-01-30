#include "../include/ft_printf.h"
#include "../libft/includes/libft.h"
#include <stdlib.h>

static int		int_len(int val)
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

static char		*build_str(int val, int is_neg)
{
	int				len;
	char			*tmp;
	int				i;

	if (val == 0)
		return (ft_strdup("0"));
	if (val == -2147483648)
		return (ft_strdup("-2147483648"));
	len = (is_neg) ? int_len(val) + 1 : int_len(val);
	if (!(tmp = (char *)malloc(sizeof(char) * (1 + len))))
		return (NULL);
	i = 0;
	while (val > 0)
	{
		tmp[i++] = val % 10 + '0';
		val /= 10;
	}
	if (is_neg)
		tmp[i++] = '-';
	tmp[i] = '\0';
	return (ft_strrev(tmp));
}

char			*ft_itoa(int val)
{
	if (val < 0)
		return (build_str(-val, 1));
	return (build_str(val, 0));
}
