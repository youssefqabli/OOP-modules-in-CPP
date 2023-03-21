# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/06 20:36:11 by yel-qabl          #+#    #+#              #
#    Updated: 2023/03/14 01:13:47 by yel-qabl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

CC = clang++ 
CFLAGS = -Wall -Wextra -Werror -std=c++98
FILES = PhoneBook.cpp 
OBJ = $(FILES:.cpp=.o)
RM = rm -rf

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

re : fclean all

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
