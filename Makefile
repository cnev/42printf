NAME = ft_ls
CC = gcc -I $(HEADERFOLDER)
CFLAGS = -Wall -Wextra -Werror -O3
SRCFOLDER = srcs
HEADERFOLDER = includes/
SRC += $(SRCFOLDER)/data.c
SRC += $(SRCFOLDER)/field_width.c
SRC += $(SRCFOLDER)/flags.c
SRC += $(SRCFOLDER)/format.c
SRC += $(SRCFOLDER)/ft_itoa.c
SRC += $(SRCFOLDER)/ft_printf.c
SRC += $(SRCFOLDER)/ft_uitoa_1.c
SRC += $(SRCFOLDER)/ft_uitoa_2.c
SRC += $(SRCFOLDER)/ft_uitoa_3.c
SRC += $(SRCFOLDER)/hexa_string_1.c
SRC += $(SRCFOLDER)/hexa_string_2.c
SRC += $(SRCFOLDER)/hexa_string_3.c
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
SRC += $(SRCFOLDER)/output_mods.c
SRC += $(SRCFOLDER)/precision.c
SRC += $(SRCFOLDER)/printing.c
SRC += $(SRCFOLDER)/singleton.c
SRC += $(SRCFOLDER)/variables.c
SRC += $(SRCFOLDER)/widechar.c
OBJ = $(SRC:%.c=%.o)
LIB = libft/

all: $(NAME)

$(NAME): $(OBJ) lib
	@$(CC) $(CFLAGS) -Llibft/ -lft -g -o $(NAME) $(OBJ)

%.o: %.c
	@echo "Building $@"
	@$(CC) $(CFLAGS) -I. -o $@ -c $^

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
