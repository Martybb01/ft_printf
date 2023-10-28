NAME = libftprintf.a
AR = ar
ARFLAGS = -rcs
RM = rm -f

SRCS = ft_printf.c \
printf_utils.c \

OBJS := $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all
