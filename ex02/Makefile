# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edi-maio <edi-maio@42angouleme.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/17 17:10:17 by edi-maio          #+#    #+#              #
#    Updated: 2026/04/21 15:05:01 by edi-maio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp

OBJS = $(SRCS:.cpp=.o)

.o: .cpp
	c++ $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
