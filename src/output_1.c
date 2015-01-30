#include "../include/ft_printf.h"
#include "../libft/includes/libft.h"
#include <wchar.h>

t_data			*build_s(void)
{
	return (create_data(ft_strdup(va_arg(VARS, char *)), NULL));
}

t_data			*build_maj_s(void)
{
	wchar_t			*tmp;
	wchar_t			*val;

	tmp = NULL;
	val = va_arg(VARS, wchar_t *);
	ft_memmove(tmp, val, ft_wcstrlen(val));
	return (create_data(NULL, tmp));
}

t_data			*build_c(void)
{
	char			*tmp;

	if (!(tmp = (char *)malloc(sizeof(char) * 2)))
		return (NULL);
	tmp[0] = va_arg(VARS, int);
	tmp[1] = '\0';
	return (create_data(tmp, NULL));
}

t_data			*build_maj_c(void)
{
	wchar_t			*tmp;

	if (!(tmp = (wchar_t *)malloc(sizeof(wchar_t) * 2)))
		return (NULL);
	tmp[0] = va_arg(VARS, wint_t);
	tmp[1] = '\0';
	return (create_data(NULL, tmp));
}

t_data			*build_p(void)
{
	return (create_data(NULL, NULL));
}
