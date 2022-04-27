# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 15:15:55 by pnamwayk          #+#    #+#              #
#    Updated: 2022/04/03 15:37:39 by pnamwayk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRC = process.c main.c ft_putstr.c ft_strdup.c ft_atoi.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
		/bin/rm -f *.o

fclean:
		/bin/rm -f $(NAME)

re: fclean all
