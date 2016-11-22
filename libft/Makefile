# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obelange <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/25 11:25:58 by obelange          #+#    #+#              #
#    Updated: 2016/10/22 17:26:22 by obelange         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

S_PATH = 

FILES = ft_strlen ft_toupper ft_tolower ft_strclr ft_strcpy ft_strncpy\
ft_strcat ft_strncat ft_strlcat ft_strchr ft_strrchr ft_strcmp ft_strncmp\
ft_strequ ft_strnequ ft_strstr ft_strnstr ft_memset ft_bzero ft_memcpy\
ft_memccpy ft_memmove ft_memchr ft_memcmp ft_isalpha ft_isdigit ft_isalnum\
ft_isascii ft_isprint ft_putchar ft_putchar_fd ft_putstr ft_putstr_fd\
ft_putendl ft_putendl_fd ft_putnbr ft_putnbr_fd ft_atoi ft_itoa ft_memalloc\
ft_strnew ft_memdel ft_strdel ft_striter ft_striteri ft_strmap ft_strmapi\
ft_strdup ft_strsub ft_strjoin ft_strtrim ft_strsplit 

FILES += ft_lstnew ft_lstdelone ft_lstdel ft_lstadd ft_lstiter ft_lstmap
FILES += ft_stri_head ft_stri_tail ftsd ft_strdfree ft_isnt32
# get_next_line
FILES += ft_stric ft_strmcat 

FILES += main

H_PATH = 

OBJ = $(addsuffix .o, $(FILES))

SRC = $(addprefix $(S_PATH), $(addsuffix .c, $(FILES)))

HDR = libft.h

FLAGS = -Wall -Werror -Wextra

.PHONY: all fclean clean fsan run re norm test


all : $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

run: 
	@gcc $(FLAGS) -o a.out $(OBJ)

$(OBJ) :  
	@gcc -c $(SRC) $(HDR)

fsan : fclean $(OBJ)
	@gcc $(FLAGS) -fsanitize=address -o a.out $(OBJ)

norm : 
	norminette

test : fclean $(NAME)
	gcc $(FLAGS) -o bin $(OBJ) $(HDR) && ./bin && rm -f bin

clean :
	@rm -f $(OBJ) libft.h.gch

fclean : clean
	@rm -f $(NAME)

re : fclean all
