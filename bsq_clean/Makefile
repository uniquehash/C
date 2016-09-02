# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obelange <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/30 10:05:23 by obelange          #+#    #+#              #
#    Updated: 2016/08/31 22:43:34 by obelange         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

FILES = main set_up_legend_and_map print_map free_all solve_map ft_atoi

SRC_PATH = srcs

SRC_FILES = $(addprefix $(SRC_PATH)/,$(addsuffix .c,$(FILES)))

OBJ_FILES = $(addsuffix .o,$(FILES))

HDR_PATH = includes

HDR = -I $(HDR_PATH)

COMP_FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	@gcc -o $(NAME) $(COMP_FLAGS) $(HDR) $(LIB) $(SRC_FILES)

clean:
	@rm -f $(OBJ_FILES)

fclean: clean
	@rm -f $(NAME)

re: fclean all
