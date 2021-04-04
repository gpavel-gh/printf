NAME = libftprintf.a

NAMELIB = printflib.a

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
		ft_printf_%p.c 


$(NAME): $(SRC)
	$(CC) -g3 $(WFLAGS) $(SRC) -o $(NAME)
	./$(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

bonus:
	@echo "No hay bonus jua, jua, jua."

re: fclean all