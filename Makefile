NAME = printf_program

NAMELIB = printflib.a

CC = gcc

WFLAGS = -Wall -Werror -Wextra 

SRC	=	ft_printf.c \
		MAIN.c \
		ft_printf_utils.c \
		ft_printf_analyzer.c \
		ft_printf_%c.c \
		ft_printf_%d.c \
		ft_printf_%s.c

$(NAME): $(SRC)
	$(CC) $(WFLAGS) $(SRC) -o $(NAME)
	./$(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

bonus:
	@echo "No hay bonus"

re: fclean all