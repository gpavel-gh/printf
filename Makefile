NAME = ft_printf

NAMELIB = ft_printf.a

CC = gcc

WFLAGS = -Wall -Werror -Wextra

SRC	=	ft_printf.c \
		MAIN.c \
		ft_printf_utils.c \
		ft_printf_analyzer.c \
		ft_printf_%c.c \
		ft_printf_%d.c \
		ft_printf_%s.c \
		ft_printf_%xX.c \
		ft_printf_%u.c \
		ft_printf_%p.c \
		ft_get_precision.c \
		ft_precision_p.c \

OBJ = $(SRC:.c=.o)

all: $(NAMELIB)

$(NAME): $(SRC)
	$(CC) $(WFLAGS) -g3 $(SRC) -o $(NAME)
	./$(NAME)

$(NAMELIB): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib$(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus:
	@echo "No hay bonus jua, jua, jua."
