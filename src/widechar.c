#include <wchar.h>

size_t			ft_wcstrlen(wchar_t *str)
{
	int				i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
