# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/29 16:48:02 by yel-qabl          #+#    #+#              #
#    Updated: 2023/05/24 00:50:50 by yel-qabl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever
CC= c++
FLAGS=-Wall -Werror -Wextra -std=c++98
SRC = main.cpp  
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(SRC) whatever.hpp
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all