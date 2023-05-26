# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/29 16:48:02 by yel-qabl          #+#    #+#              #
#    Updated: 2023/05/26 01:25:37 by yel-qabl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span
CC= c++
FLAGS=-Wall -Werror -Wextra -std=c++98
SRC = main.cpp  Span.cpp
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(SRC) Span.hpp
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all