# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdube <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 10:22:14 by mdube             #+#    #+#              #
#    Updated: 2019/08/19 14:33:12 by mdube            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = check.a
SRC = ft_checking_numbers.c is_verify.c reading_instr.c ft_instr.c ft_instr_both.c push.c pop_number.c push_to_stack.c push_list.c create_stack_a.c createNode.c create_stack.c rotate_normal.c rotate_reverse.c list_length.c swap_data.c
OBJ = ft_checking_numbers.o is_verify.o reading_instr.o ft_instr.o ft_instr_both.o push.o pop_number.o push_to_stack.o push_list.o create_stack_a.o createNode.o create_stack.o rotate_normal.o rotate_reverse.o list_length.o swap_data.o

all: $(NAME)

$(NAME):
	@gcc -c -I -Wall -Werror -Wextra $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "Creating objects files and our library"

clean:
	@rm -f $(OBJ)
	@echo "Cleaning object files"

fclean:clean
	@rm -f $(OBJ) $(NAME)

re:fclean all
