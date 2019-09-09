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

SRC = three_nums.c more_nums.c loop_stack.c top_bottom.c small_number.c is_sorted.c compare_numbers.c

OBJ = three_nums.o more_nums.o loop_stack.o top_bottom.o small_number.o is_sorted.o compare_numbers.o

all: $(NAME)

$(NAME):
	@gcc -c -Wall -Werror -Wextra $(SRC)
	@ar rc $(NAME) $(OBJ)
	@echo "Creating objects files and our library"

clean:
	@rm -f $(OBJ)
	@echo "Cleaning object files"

fclean: clean
	@rm $(NAME)
	@echo "Cleaning object files and library"

re: fclean all
