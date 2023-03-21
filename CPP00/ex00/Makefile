# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/06 20:36:11 by yel-qabl          #+#    #+#              #
#    Updated: 2023/03/14 01:14:25 by yel-qabl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MegaPhone

CC= clang++
FLAGS=-Wall -Werror -Wextra -std=c++98
SRC=MegaPhone.cpp
OBJ=MegaPhone.o
RM =rm -rf

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(LIBS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

