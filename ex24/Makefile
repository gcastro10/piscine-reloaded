# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: goperez- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/09 16:52:11 by goperez-          #+#    #+#              #
#    Updated: 2026/04/09 17:10:31 by goperez-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CC		= cc
CFLAGS		= -Wall -Wextra -Werror
SRCS_DIR	= srcs/
INCS_DIR	= includes/


FILES		= ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

# Prepend the directory path to the files
SRCS		= $(addprefix $(SRCS_DIR), $(FILES))
# Convert .c names to .o names for the objects
OBJS		= $(SRCS:.c=.o)

# Rules
all: $(NAME)

# Create the library
# ar: archive, r: replace, c: create
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

# Compile .c files to .o files
# -I tells cc where to find the .h files
%.o: %.c
	$(CC) $(CFLAGS) -I $(INCS_DIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
