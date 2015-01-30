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
		val /= 10;
	}
	return (i);
}

char			*ft_uitoa_size_t(size_t val)
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
		tmp[i++] = val % 10 + '0';
		val /= 10;
	}
	tmp[i] = '\0';
	return (ft_strrev(tmp));
}

int				main(int ac, char **av)
{
	printf("MAX INT : %s\n", ft_uitoa(4294967295));
	printf("is really: %u\n", 4294967295);
	printf("MAX INT : %s\n", ft_uitoa(1234));
	printf("is really: %u\n", 1234);
	char c = getchar();
	return (0);
}
