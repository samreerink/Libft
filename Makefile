NAME= 		libft.a

HEADER=		libft.h

RM= 		rm -f

FLAGS= 		-Wall -Werror -Wextra

SRCS= 		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
			ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
			ft_memcpy.c ft_memmove.c ft_toupper.c ft_tolower.c \
			ft_strncmp.c ft_strchr.c ft_strrchr.c ft_memchr.c \
			ft_strlcpy.c ft_memcmp.c ft_atoi.c ft_calloc.c \
			ft_strdup.c ft_strdup.c ft_putchar_fd.c \
			ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_strlcat.c ft_substr.c ft_strjoin.c ft_strtrim.c

OBJECT= 	$(SRCS:.c=.o)


all:		$(NAME)

$(NAME): 	$(OBJECT)
			ar rcs $@ $^

%.o:		%.c $(HEADER)
			$(CC) -c $(FLAGS) -o $@ $<

clean:
			$(RM) $(OBJECT)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:	all clean fclean re
