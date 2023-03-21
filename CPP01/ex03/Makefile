# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 19:23:09 by yel-qabl          #+#    #+#              #
#    Updated: 2023/03/21 00:56:24 by yel-qabl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Unnecessary_violence
CC= clang++
FLAGS=-Wall -Werror -Wextra -std=c++98
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
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

