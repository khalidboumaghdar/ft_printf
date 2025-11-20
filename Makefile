NAME =  libftprintf.a
CC = cc
CFLAGS =  -Wall -Wextra -Werror

SRC = ft_printf.c  ft_hexadecimal_uper.c ft_hexadecimal_lower.c\
	  ft_putchar.c ft_putnber.c  ft_putstr.c ft_hexadecimal_adress.c\
	  ft_putnber_unsigned.c ft_strchar.c


OBJ = ${SRC:.c=.o}

all: ${NAME}

${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJ}

%.o: %.c 
	${CC} ${CFLAGS} -c $< -o $@
	
clean:
	rm -f ${OBJ} 

fclean: clean
	rm -f ${NAME}


re: fclean all

.PHONY:  clean fclean re all
