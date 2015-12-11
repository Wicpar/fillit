# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makeMakefile.sh                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnieto <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/04 01:19:47 by fnieto            #+#    #+#              #
#    Updated: 2015/12/11 19:17:51 by fnieto           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

file="Makefile"
name="fillit"

printf "# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnieto <fnieto@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 14:09:58 by apachkof          #+#    #+#              #
#    Updated: 2015/12/03 23:05:57 by fnieto           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=fillit

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM=rm -f

SRC=" > $file

ls *.c | tr "\n" " "| rev | cut -c 2- | rev >> $file

echo "
LIB=libft.a

OBJ=\$(SRC:.c=.o)

\$(NAME): $name.h
		\$(CC) \$(CFLAGS) -c \$(SRC)
		\$(CC) \$(CFLAGS) -o \$(NAME) \$(OBJ) \$(LIB)

all: \$(NAME)

clean:
		\$(RM) \$(OBJ)

fclean: clean
		\$(RM) \$(NAME)

re: fclean all

.PHONY: clean fclean" >> $file
