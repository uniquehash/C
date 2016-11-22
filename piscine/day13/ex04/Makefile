# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obelange <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/25 11:25:58 by obelange          #+#    #+#              #
#    Updated: 2016/08/26 23:26:03 by obelange         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

H_PATH = includes/

S_PATH = srcs/

FILES = main btree_create_node ft_putstr btree_insert_data ft_voidcmp ft_strcmp\
		btree_apply_infix print_void ft_putnbr ft_putchar

OBJ = $(addsuffix .o, $(FILES))

SRC = $(addprefix $(S_PATH), $(addsuffix .c, $(FILES)))

HDR = -I $(H_PATH)

FLAGS = -Wall -Werror -Wextra

all : $(NAME)
	
$(NAME) : $(OBJ)
	@gcc $(FLAGS) -o $(NAME) $(OBJ)

$(OBJ) : norm 
	@gcc -c $(SRC) $(HDR)

norm : 
	norminette

test : $(NAME)
	gcc $(FLAGS) -o bin $(OBJ) $(HDR) && ./bin && rm -f bin
	@rm -f $(OBJ) $(LIB)

clean :
	@rm -f $(OBJ) $(LIB)

fclean : clean
	@rm -f $(NAME)

re : fclean all
