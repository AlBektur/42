NAME    := push_swap
CC      := cc -g
CFLAGS  := -Wall -Wextra -Werror

INCLUDES := ./includes/header.h

SRCS := ./parse/ft_split.c \
		./parse/parser.c \
		./parse/utils_2.c \
		./parse/utils.c \
		./parse/utils_3.c \
		./parse/validation.c \
		./mains/main.c \
		./min_max/min_max.c \
		./min_max/sort.c \
		./min_max/sort_2.c \
		./min_max/act_0.c \
		./min_max/act_1.c \
		./min_max/act_2.c \
		./min_max/act_2_2.c\
		./min_max/act_3.c \
		./min_max/act_3_3.c \
		./min_max/moves_a.c \
		./min_max/moves_b.c \


OBJS := $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	$(CC)  $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c $(INCLUDES) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY: clean fclean re all
