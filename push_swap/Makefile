# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdube <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/24 08:29:35 by mdube             #+#    #+#              #
#    Updated: 2019/08/24 09:24:15 by mdube            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

SRC = is_sorted.c compare_numbers.c

OBJ = is_sorted.o compare_numbers.o

all: $(NAME)

$(NAME):
	@gcc -c -Wall -Werror -Wextra $(SRC)
	@ar rc $(NAME) $(OBJ)
	@echo "Creating objects files and our library"

clean:
	@rm *.o
	@echo "Cleaning object files"

fclean: clean
	@rm $(NAME)
	@echo "Cleaning object files and library"

re: fclean all
