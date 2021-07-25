SRCS		= ft_strlcat.c ft_strlcpy.c ft_memset.c ft_atoi.c ft_bzero.c ft_memcpy.c ft_strchr.c ft_strlen.c ft_strnstr.c ft_strrchr.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_isascii.c ft_tolower.c ft_toupper.c ft_strncmp.c
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