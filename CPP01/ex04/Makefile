# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 19:23:09 by yel-qabl          #+#    #+#              #
#    Updated: 2023/03/23 03:03:47 by yel-qabl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Replace
CC= clang++
FLAGS=-Wall -Werror -Wextra -std=c++98
SRC = main.cpp Replace.cpp
OBJ = $(SRC:%.cpp=%.o)
RM =rm -rf

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

