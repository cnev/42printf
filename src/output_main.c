t_outputft			g_ft[40] = {
	/* output_1.c */
	{"s", build_s},
	{"S", build_maj_s},
	{"c", build_c},
	{"C", build_maj_c},
	{"p", build_p},

	/* output_2.c */
	{"d", build_d},
	{"o", build_o},
	{"u", build_u},
	{"x", build_x},

	/* output_2.c */
	{"D", build_maj_d},
	{"O", build_maj_o},
	{"U", build_maj_u},
	{"X", build_maj_x},


	/* output_hh.c */
	{"hhd", build_hhd},
	{"hho", build_hho},
	{"hhu", build_hhu},
	{"hhx", build_hhx},
	{"hhX", build_hh_maj_x},

	/* output_h.c */
	{"hd", build_hd},
	{"ho", build_ho},
	{"hu", build_hu},
	{"hx", build_hx},
	{"hX", build_h_maj_x},

	/* output_l.c */
	{"ld", build_ld},
	{"lo", build_lo},
	{"lu", build_lu},
	{"lx", build_lx},
	{"lX", build_l_maj_x},

	/* output_ll.c */
	{"lld", build_lld},
	{"llo", build_llo},
	{"llu", build_llu},
	{"llx", build_llx},
	{"llX", build_ll_maj_x},

	/* output_j.c */
	{"jd", build_jd},
	{"jo", build_jo},
	{"ju", build_ju},
	{"jx", build_jx},
	{"jX", build_j_maj_x},

	/* output_z.c */
	{"zd", build_zd},
	{"zo", build_zo},
	{"zu", build_zu},
	{"zx", build_zx},
	{"zX", build_z_maj_x},
	{NULL, NULL}
};

static char		*select_output(t_info *info)
{
	int				i;

	i = -1;
	while (g_ft[++i].f)
	{
		if (!ft_strcmp(g_ft[i], info->format))
			return (g_ft[i].f());
	}
	return (NULL);
}

char			*build_output(t_info *info)
{
	char			*var;


}
