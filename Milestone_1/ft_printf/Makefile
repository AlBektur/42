# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsaipidi <bsaipidi@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/12 02:35:42 by bsaipidi          #+#    #+#              #
#    Updated: 2025/10/25 23:32:46 by bsaipidi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME      := libftprintf.a
CC        := cc
CFLAGS    := -Wall -Wextra -Werror -g
AR        := ar 
RCS       := rcs
RM        := rm -f
SRC       := ft_printf.c utils.c ft_utoa.c utils2.c ft_itoa.c ft_hexnum.c ft_putpointer.c

OBJS      := $(SRC:.c=.o)

HEADER    := ft_printf.h

all: $(NAME)
$(NAME): $(OBJS)
	$(AR) $(RCS) $@ $^

%.o: %.c $(HEADER) Makefile
	$(CC) $(CFLAGS) -c -o $@ $<
clean: 
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY : all clean fclean re 
