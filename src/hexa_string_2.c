#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static char		*ft_strrev(char *str)
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

static char		hex_char(size_t val, int is_maj)
{
	const char		table[] = "0123456789abcdef";
	const char		table2[] = "0123456789ABCDEF";

	if (!is_maj)
		return (table[val]);
	return (table2[val]);
}

char			*hexa_string_size_t(size_t val, int is_maj)
{
	int				len;
	char			*tmp;
	int				i;


	if (val == 0)
		return (strdup("0"));
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

int main(int ac, char **av)
{
	printf("MAX INT : %s\n", hexa_string(4294967295, 0));
	printf("really is :%x\n", 4294967295);
	printf("MAX INT : %s\n", hexa_string(4294967295, 1));
	printf("really is :%X\n", 4294967295);
	printf("zero : %s\n", hexa_string(20, 1));
	printf("really is :%X\n", 20);
	printf("seven : %s\n", hexa_string(100, 1));
	printf("really is :%X\n", 100);
	char c = getchar();
	return (0);
}
