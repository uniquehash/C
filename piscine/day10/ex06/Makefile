# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obelange <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/23 22:09:09 by obelange          #+#    #+#              #
#    Updated: 2016/08/23 22:44:55 by obelange         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

C_FILES = ft_atoi ft_putchar ft_putnbr ft_putstr main

SRC_FILES = $(addsuffix .c, $(C_FILES))

HDR_FILES = doop.h

OBJECTS = $(addsuffix .o, $(C_FILES))

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC_FILES)
	@gcc -o $(NAME) $(FLAGS) $(SRC_FILES) $(HRD_FILES)

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
