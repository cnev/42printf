#include "../include/ft_printf.h"
#include "../libft/includes/libft.h" /* YO NORM ERASE THOS*/

t_glob		*get_glob(int mode)
{
	static t_glob		glob;
	static int			init = 0;

	if (!init && !mode)
	{
		glob.left_i = 0;
		glob.right_i = 0;
		glob.list = NULL;
		init = 1;
	}
	else if (mode)
	{
		init = 0;
	}
	return (&glob);
}
