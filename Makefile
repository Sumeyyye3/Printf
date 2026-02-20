# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sumdogan <sumdogan@student.42kocaeli.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/11 04:31:32 by sumdogan          #+#    #+#              #
#    Updated: 2026/02/12 21:34:00 by sumdogan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar

ARFLAGS = rcs

RM = rm -f

SRCS = \
	ft_check_box.c ft_print_hexa.c ft_print_str.c ft_print_chr.c ft_print_ptr.c \
	ft_printf.c ft_print_numbers.c ft_print_unumbers.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re