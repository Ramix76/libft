NAME = libft.a

SRCS = ft_isalpha.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
	   ft_strncmp.c ft_atoi.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	   ft_isprint.c ft_strchr.c ft_toupper.c ft_tolower.c ft_strrchr.c \
	   ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strnstr.c ft_memchr.c \
	   ft_strnstr.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	   ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	   ft_striteri.c

#SRCS_BONUS = ft_bonus.c

OBJS = $(SRCS:%.c=%.o)

#OBJS_BONUS = $(SORCS_BONUS:%.c=%.o)

CC = gcc

#FLAGS = -Wall -Werror -Wextra -I

RM = rm -f

%.o: %.c
	$(CC) $(FLAGS) -I./ -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) libft.h
	ar -crs $(NAME) $(OBJS)

#bonus:$(NAME) $(OBJS_BONUS)
#	ar -crs $(NAME) $(SRCS_BONUS)
#	@touch $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean
	$(MAKE)

.PHONY: all clean fclean re
