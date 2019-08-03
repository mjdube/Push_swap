# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdube <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 10:22:14 by mdube             #+#    #+#              #
#    Updated: 2019/08/03 05:46:22 by mdube            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = check.a
SRC = createNode.c create_stack.c rotate_normal.c rotate_reverse.c list_length.c
OBJ = createNode.o create_stack.o rotate_normal.o rotate_reverse.o list_length.o
HEAD = check.h

all: $(NAME)

$(NAME):
	@gcc -c -I -Wall -Werror -Wextra $(SRC) $(HEAD)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)

fclean:clean
	@rm -f $(OBJ) $(NAME)

re:fclean all
