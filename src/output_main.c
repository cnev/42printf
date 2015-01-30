#include "../include/ft_printf.h"
#include "../libft/includes/libft.h"

t_outputft			g_ft[40] = {
	{"s", build_s},
	{"S", build_maj_s},
	{"c", build_c},
	{"C", build_maj_c},
	{"p", build_p},
	{"d", build_d},
	{"o", build_o},
	{"u", build_u},
	{"x", build_x},
	{"%", build_pct},
	{"D", build_maj_d},
	{"O", build_maj_o},
	{"U", build_maj_u},
	{"X", build_maj_x},
	{"hhd", build_hhd},
	{"hho", build_hho},
	{"hhu", build_hhu},
	{"hhx", build_hhx},
	{"hhX", build_hh_maj_x},
	{"hd", build_hd},
	{"ho", build_ho},
	{"hu", build_hu},
	{"hx", build_hx},
	{"hX", build_h_maj_x},
	{"ld", build_ld},
	{"lo", build_lo},
	{"lu", build_lu},
	{"lx", build_lx},
	{"lX", build_l_maj_x},
	{"lld", build_lld},
	{"llo", build_llo},
	{"llu", build_llu},
	{"llx", build_llx},
	{"llX", build_ll_maj_x},
	/*{"jd", build_jd},
	{"jo", build_jo},
	{"ju", build_ju},
	{"jx", build_jx},
	{"jX", build_j_maj_x},
	{"zd", build_zd},
	{"zo", build_zo},
	{"zu", build_zu},
	{"zx", build_zx},
	{"zX", build_z_maj_x},*/
	{NULL, NULL}
};

static t_data		*select_output(t_info *info)
{
	int				i;

	i = -1;
	while (g_ft[++i].f)
	{
		if (!ft_strcmp(g_ft[i].format, info->format))
			return (g_ft[i].f());
	}
	return (NULL);
}

static t_data		*modify_output(t_data *data, t_info *info)
{
	data->str = do_precision(data->str, info);
	data->str = do_sharp(data->str, info);
	data->str = do_sign(data->str, info);
	data->str = do_padding(data->str, info);
	return (data);
}

t_data				*build_output(t_info *info)
{
	t_data			*var;

	if (!(var = select_output(info)))
		return (NULL);
	modify_output(var, info);
	return (var);
}
