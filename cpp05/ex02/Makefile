# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agorski <agorski@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/22 10:43:01 by agorski           #+#    #+#              #
#    Updated: 2025/05/31 21:01:24 by agorski          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat
SRC = main.cpp AForm.cpp Bureaucrat.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = $(SRC:.cpp=.o)
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
	
fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re