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
		return (strdup("0"));
	if (val == -2147483648)
		return (strdup("-2147483648"));
	len = (is_neg) ? int_len(val) + 1 : int_len(val);
	if (!(tmp = (char *)malloc(sizeof(char) * (1 + len))))
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

char			*ft_itoa(int val)
{
	if (val < 0)
		return (build_str(-val, 1));
	return (build_str(val, 0));
}

int main(int ac, char **av)
{
	printf("MAX INT : %s\n", ft_itoa(2147483647));
	printf("MIN INT : %s\n", ft_itoa(-2147483648));
	printf("zero : %s\n", ft_itoa(0));
	printf("-zero : %s\n", ft_itoa(-0));
	printf("-five : %s\n", ft_itoa(-5));
	printf("seven : %s\n", ft_itoa(7));
	char c = getchar();
	return (0);
}
