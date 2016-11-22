# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obelange <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/25 11:25:58 by obelange          #+#    #+#              #
#    Updated: 2016/08/25 20:57:59 by obelange         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

S_PATH = srcs/

FILES = main ft_ex ft_putstr ft_putchar ft_strerror ft_puterr ft_putnbr

H_PATH = includes/

OBJ = $(addsuffix .o, $(FILES))

SRC = $(addprefix $(S_PATH), $(addsuffix .c, $(FILES)))

HDR = -I $(H_PATH)

FLAGS = -Wall -Werror -Wextra

LIB = libft.a

all : $(NAME)
	
$(NAME) : $(LIB)
	@gcc $(FLAGS) -o $(NAME) $(OBJ) $(LIB)

$(LIB) : $(OBJ)
	ar rc $(LIB) $(OBJ)

$(OBJ) :  norm
	@gcc -c $(SRC) $(HDR)

norm : 
	norminette

exe : $(NAME)
	./$(NAME)

clean :
	@rm -f $(OBJ) $(LIB)

fclean : clean
	@rm -f $(NAME)

re : fclean all
