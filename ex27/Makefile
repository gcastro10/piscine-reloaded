# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: goperez- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/09 17:28:39 by goperez-          #+#    #+#              #
#    Updated: 2026/04/09 17:29:30 by goperez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_display_file
CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
SRCS	= ft_display_file.c
OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean
