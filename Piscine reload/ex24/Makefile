CC := gcc
CFLAGS := -Wall -Wextra -Werror 
RM := rm -f
NAME := libft.a
AR := ar
RCS := rcs
HEADER := -I./includes


#import files from srcs

SRCS := ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

#it changes the the extention of all file in srcs, from .c to .o
OBJS := $(SRCS:.c=.o)

all : $(NAME)

#MAKE .a FILE 
$(NAME) : $(OBJS)
	$(AR) $(RCS) $@ $^

#compiles the project if it was, no needed, i just did on learning purpose 
# run : $(OBJS)
#	$(CC) $(CFLAGS) $(HEADER) $< $@
	

#make .o files
%.o : %.c
	$(CC) $(CFLAGS) $(HEADER) -c $< -o $@  


#clean function

clean :
	$(RM) $(OBJS)

fclean :
	$(RM) $(NAME) $(OBJS)
re : fclean all

.PHONY: all clean fclean re
