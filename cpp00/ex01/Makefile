# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/07 16:51:10 by aymohamm          #+#    #+#              #
#    Updated: 2024/12/07 16:51:14 by aymohamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Phonebook.cpp Phonebook_utils.cpp Contact.cpp main.cpp
NAME = phonebook
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = $(SRC:%.cpp=%.o)


all: $(NAME)

$(NAME): $(OBJ)
		 $(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
