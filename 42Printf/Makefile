# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sun-nabi <sun-nabi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/17 06:19:31 by sun-nabi          #+#    #+#              #
#    Updated: 2023/12/19 04:46:55 by sun-nabi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =  libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

DEL = rm -rf

AR = ar -rcs

SRC =   ft_printf.c \
ft_printhex.c \
ft_printchar.c \
ft_printstr.c \
ft_printuint.c \
ft_printdecimal.c \
ft_printptr.c \

OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	$(DEL) $(OBJ)

fclean: clean
	$(DEL) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
