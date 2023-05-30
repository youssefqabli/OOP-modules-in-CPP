# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/29 16:48:02 by yel-qabl          #+#    #+#              #
#    Updated: 2023/05/30 00:28:00 by yel-qabl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc
CC= c++
FLAGS=-Wall -Werror -Wextra -std=c++98
SRC = main.cpp  
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(SRC) 
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all