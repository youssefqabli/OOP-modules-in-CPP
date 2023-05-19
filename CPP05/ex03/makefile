# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-qabl <yel-qabl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/29 16:48:02 by yel-qabl          #+#    #+#              #
#    Updated: 2023/05/17 18:16:34 by yel-qabl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = EX03
CC= c++
FLAGS=-Wall -Werror -Wextra -std=c++98
SRC = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(SRC) Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp \
		RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all