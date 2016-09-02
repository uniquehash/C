# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obelange <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/22 14:08:35 by obelange          #+#    #+#              #
#    Updated: 2016/08/25 12:26:18 by obelange         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_PATH = srcs/

HDR_PATH = includes/ 

FILES = ft_putchar ft_putstr ft_strcmp ft_strlen ft_swap ft_putnbr

SRC_FILES = $(addsuffix .c, $(FILES))

OBJECTS = $(addsuffix .o, $(FILES))

SRC = $(addprefix $(SRC_PATH), $(SRC_FILES))

HDR = -I $(HDR_PATH)

C_FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

$(OBJECTS): $(SRC)
	gcc -c $(C_FLAGS) $(HDR) $(SRC)

clean: 
	rm -f $(OBJECTS)

fclean: clean 
	rm -f $(NAME)

re: fclean all
