# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 19:23:09 by yel-qabl          #+#    #+#              #
#    Updated: 2023/03/18 19:08:05 by yel-qabl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ZombieHorde
CC= clang++
FLAGS=-Wall -Werror -Wextra -std=c++98  
SRC = main.cpp Zombie.cpp ZombieHorde.cpp
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

