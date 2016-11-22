# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obelange <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/28 10:11:39 by obelange          #+#    #+#              #
#    Updated: 2016/08/28 23:35:40 by obelange         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2

S_PATH = srcs/

H_PATH = includes/

B_PATH = build/

FILES = ft_list ft_print ft_rush ft_string main ft_strlen ft_strcmp char_rush04\
		char_rush03 char_rush02 char_rush01 char_rush00

S_FILES = $(addsuffix .c, $(FILES))

SRC = $(addprefix $(S_PATH), $(S_FILES))

O_FILES = $(addsuffix .o, $(FILES))

OBJ = $(addprefix $(B_PATH), $(O_FILES))

HDR = -I $(H_PATH)

C_FLAGS = -Wall -Werror -Wextra
C_FLAGS += $(HDR)


.PHONY: all clean fclean re

all : $(NAME)

$(NAME) : $(OBJ)
	gcc $(LFLAGS) -o $(NAME) $(OBJ)

build/%.o: srcs/%.c | build
	gcc $(C_FLAGS) -o $@ -c $^

build : 
	mkdir build/

clean : 
	rm -rf build/

fclean : clean
	rm -f $(NAME)

re: all






