NAME = libftprintf.a
CC = gcc -I $(HEADERFOLDER)
CFLAGS = -Wall -Wextra -Werror -O3
SRCFOLDER = src
HEADERFOLDER = include/
SRC += $(SRCFOLDER)/data.c
SRC += $(SRCFOLDER)/equals_zero.c
SRC += $(SRCFOLDER)/field_width.c
SRC += $(SRCFOLDER)/flags.c
SRC += $(SRCFOLDER)/format.c
SRC += $(SRCFOLDER)/ft_itoa.c

SRC += $(SRCFOLDER)/ft_uitoa_1.c
SRC += $(SRCFOLDER)/ft_uitoa_2.c
SRC += $(SRCFOLDER)/ft_uitoa_3.c
SRC += $(SRCFOLDER)/handle_padding.c
SRC += $(SRCFOLDER)/handle_precision.c
SRC += $(SRCFOLDER)/handle_sharp.c
SRC += $(SRCFOLDER)/handle_sign.c
SRC += $(SRCFOLDER)/hexa_string_1.c
SRC += $(SRCFOLDER)/hexa_string_2.c
SRC += $(SRCFOLDER)/hexa_string_3.c
SRC += $(SRCFOLDER)/is_format.c
SRC += $(SRCFOLDER)/length_mod.c
SRC += $(SRCFOLDER)/octal_string_1.c
SRC += $(SRCFOLDER)/octal_string_2.c
SRC += $(SRCFOLDER)/octal_string_3.c
SRC += $(SRCFOLDER)/output_1.c
SRC += $(SRCFOLDER)/output_2.c
SRC += $(SRCFOLDER)/output_3.c
SRC += $(SRCFOLDER)/output_h.c
SRC += $(SRCFOLDER)/output_hh.c
SRC += $(SRCFOLDER)/output_l.c
SRC += $(SRCFOLDER)/output_ll.c
SRC += $(SRCFOLDER)/output_main.c
SRC += $(SRCFOLDER)/precision.c
SRC += $(SRCFOLDER)/printing.c
SRC += $(SRCFOLDER)/singleton.c
SRC += $(SRCFOLDER)/variables.c
SRC += $(SRCFOLDER)/widechar.c

SRC += $(SRCFOLDER)/ft_printf.c

OBJ = $(SRC:.c=.o)
LIB = libft/

all: $(NAME)

$(NAME): lib $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c
	echo "Building $@"
	$(CC) $(CFLAGS) -I. -o $@ -c $<

clean:
	rm -f $(OBJ)
	make -C libft/ clean

fclean: clean
	make -C libft/ fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

$(LIB): lib

lib:
	@make -C libft/
