NAME = libft.a


PART1 =	ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_tolower.c \
	ft_toupper.c

PART2 =	ft_itoa.c \
	ft_split.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strmapi.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c

BONUS = ft_lstadd_back.c \
	ft_lstadd_front.c \
	ft_lstclear.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstlast.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_lstsize.c

SRCS = ${PART1} ${PART2}
OBJDIR = Objets
OBJS = ${SRCS:%.c=${OBJDIR}/%.o}
OBJBNS= ${BONUS:%.c=${OBJDIR}/%.o}
DEPS = ${OBJS:.o=.d} ${OBJBNS:.o=.d}

CC = gcc
CFLAGS = -Wall -Werror -Wextra -MMD -MP


all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

bonus: ${OBJS} ${OBJBNS}
	ar rcu ${NAME} ${OBJBNS}


${OBJDIR}/%.o: %.c | ${OBJDIR}
	${CC} ${CFLAGS} -c $< -o $@

${OBJDIR}:
	mkdir -p ${OBJDIR}


clean:
	rm -rf ${OBJDIR}

fclean: clean
	rm -f ${NAME}

re: fclean all


-include ${DEPS}

.PHONY: all clean fclean re bonus
