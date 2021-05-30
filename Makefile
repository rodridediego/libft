SRCS		= ft_memset.c ft_bzero.c ft_memcpy.c
OBJS		= ${SRCS:.c=.o}
NAME		= libft.a
CC			= cc
RM			= rm -f
FLAGS		= -Wall -Werror -Wextra
.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o}
${NAME}:	${OBJS}
			ar rc  ${NAME} ${OBJS}
all:		${NAME}
clean:
			${RM} ${OBJS} ${OBJB}
fclean:		clean
			${RM} ${NAME}
re:			fclean all