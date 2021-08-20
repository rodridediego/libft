SRCS		= ft_striteri.c ft_memmove.c ft_putnbr_fd.c ft_putendl_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_strtrim.c ft_strmapi.c ft_split.c ft_itoa.c ft_strjoin.c ft_substr.c ft_strlcat.c ft_strlcpy.c ft_memset.c ft_memchr.c ft_atoi.c ft_bzero.c ft_memcmp.c ft_calloc.c ft_memcpy.c ft_strchr.c ft_strlen.c ft_strnstr.c ft_strrchr.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_isascii.c ft_tolower.c ft_toupper.c ft_strncmp.c ft_strdup.c
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
so:
			$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
			gcc -nostartfiles -shared -o libft.so $(OBJS)