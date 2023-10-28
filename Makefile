NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = cc 
SRCS = ft_atoi.c ft_isdigit.c ft_strchr.c ft_strnstr.c ft_bzero.c \
ft_isprint.c ft_strlcat.c ft_strrchr.c ft_isalnum.c ft_memcpy.c \
ft_strlcpy.c ft_tolower.c ft_isalpha.c ft_strlen.c \
ft_toupper.c ft_isascii.c ft_memset.c ft_strncmp.c ft_memmove.c\
ft_memcmp.c ft_memchr.c ft_substr.c ft_strjoin.c ft_strdup.c\
ft_calloc.c ft_strtrim.c ft_strmapi.c ft_striteri.c ft_itoa.c\
ft_split.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)
all: $(NAME)

BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rc $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	$(CC) -fPIC $(CFLAGS) $(SRCS)
	cc -shared -o libft.so $(OBJS) 