# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdube <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 10:22:14 by mdube             #+#    #+#              #
#    Updated: 2019/07/22 11:19:04 by mdube            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = check.a
SRC = createNode.c create_stack.c checker.c
OBJ = createNode.o create_stack.o checker.o
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
