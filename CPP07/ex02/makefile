# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/29 16:48:02 by yel-qabl          #+#    #+#              #
#    Updated: 2023/05/24 23:00:36 by yel-qabl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array
CC= c++
FLAGS=-Wall -Werror -Wextra -std=c++98
SRC = main.cpp  
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(SRC) Array.hpp
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all