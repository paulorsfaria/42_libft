NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = cc 
SRCS = ft_atoi.c ft_isdigit.c ft_strchr.c ft_strnstr.c ft_bzero.c \
ft_isprint.c ft_strlcat.c ft_strrchr.c ft_isalnum.c ft_memcpy.c \
ft_strlcpy.c ft_tolower.c ft_isalpha.c ft_strlen.c \
ft_toupper.c ft_isascii.c ft_memset.c ft_strncmp.c ft_memmove.c\
ft_memcmp.c ft_memchr.c ft_substr.c

OBJS = $(SRCS:.c=.o)
all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

bonus: $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	$(CC) -fPIC $(CFLAGS) $(SRCS)
	cc -shared -o libft.so $(OBJS) 