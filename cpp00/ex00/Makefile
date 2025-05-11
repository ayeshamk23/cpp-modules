# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aymohamm <aymohamm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/07 16:50:45 by aymohamm          #+#    #+#              #
#    Updated: 2024/12/07 16:50:47 by aymohamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = megaphone.cpp
NAME = megaphone
CC = c++ -Wall -Wextra -Werror -std=c++98

$(NAME): $(SRC)
	$(CC) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(NAME)

fclean: clean

re: fclean all