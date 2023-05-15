# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/29 16:48:02 by yel-qabl          #+#    #+#              #
#    Updated: 2023/05/06 23:55:11 by yel-qabl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = EX00
CC= c++
FLAGS=-Wall -Werror -Wextra -std=c++98
SRC = main.cpp Bureaucrat.cpp
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(SRC) Bureaucrat.hpp
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all