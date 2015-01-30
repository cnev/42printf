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

char			*octal_string_intmax_t(intmax_t val)
{
	int				len;
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

int main(int ac, char **av)
{
	printf("MAX INT : %s\n", octal_string(4294967295));
	printf("really is :%o\n", 4294967295);
	printf("zero : %s\n", octal_string(20));
	printf("really is :%o\n", 20);
	printf("seven : %s\n", octal_string(100));
	printf("really is :%o\n", 100);
	char c = getchar();
	return (0);
}
