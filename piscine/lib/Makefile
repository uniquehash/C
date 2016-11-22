# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obelange <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/22 14:08:35 by obelange          #+#    #+#              #
#    Updated: 2016/09/01 23:48:04 by obelange         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC_PATH = srcs/

HDR_PATH = includes/ 

FILES = ft_putchar ft_putstr ft_strcmp ft_strlen ft_putnbr ft_convert_base\
		ft_strcpy ft_atoi ft_is_prime ft_sqrt 


SRC_FILES = $(addsuffix .c, $(FILES))

OBJECTS_F = $(addsuffix .o, $(FILES))

OBJECTS = $(addprefix build/, $(OBJECTS_F))

SRC = $(addprefix $(SRC_PATH), $(SRC_FILES))

HDR = -I $(HDR_PATH)

C_FLAGS = -Wall -Wextra -Werror 

LFLAGS = $(C_FLAGS)

C_FLAGS += -I $(HDR_PATH)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

build/%.o: srcs/%.c | build
	gcc $(C_FLAGS) -o $@ -c $^ 

build:
	mkdir build/

exe : $(NAME)
	gcc $(c_FLAGS) -o exe $(OBJECTS) $(HDR) main.c

test : $(NAME)
	gcc $(c_FLAGS) -o bin $(OBJECTS) $(HDR) main.c && ./bin && rm -f bin

clean: 
	rm -rf build

fclean: clean 
	rm -f $(NAME) exe

re: fclean all
