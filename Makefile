NAME	=	libft.a

SRCS	=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
		ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
		ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \

SRC_B	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
		ft_lstclear.c ft_lstiter.c \

CC	=	@cc
CFLAGS	=	-Wall -Werror -Wextra
OBJS	=	${SRCS:.c=.o}
OBJS_B	=	${SRC_B:.c=.o}
RM	=	@rm -f
LIBC	=	@ar -rcs
INCS	=	.

${NAME}: ${OBJS}
	@echo "Created .o files."
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

bonus: ${NAME} ${OBJS_B}
	${LIBC} ${NAME} ${OBJS_B}
	touch bonus

fclean: clean
	${RM} ${NAME}
	@echo "Cleaned libft.a."

clean:
	${RM} -f ${OBJS} ${OBJS_B} bonus
	@echo "Cleaned .o files."

re: fclean all

.PHONY: all fclean clean re .c.o
