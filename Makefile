NAME = libftprintf.a
AR = ar
ARFLAGS = -rcs
RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c \
printf_utils.c \
printf_utils2.c \

OBJS := $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

execute : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all
