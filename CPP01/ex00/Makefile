# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 19:23:09 by yel-qabl          #+#    #+#              #
#    Updated: 2023/03/25 04:19:15 by yel-qabl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie 
CC= c++
FLAGS=-Wall -Werror -Wextra -std=c++98
SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJ = $(SRC:%.cpp=%.o)
RM =rm -rf

all: $(NAME)

$(NAME): $(SRC) Zombie.hpp
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
