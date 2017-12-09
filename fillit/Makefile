# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marezgui <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/26 17:34:32 by marezgui          #+#    #+#              #
#    Updated: 2017/12/07 23:47:48 by souakrim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#
#  To remove '-fsanitize=address' '*.c' ********  *********
#  *.c
#

NAME = fillit

FLAGS = -Wall -Wextra -Werror

SRC =	ft_checktab.c ft_map.c ft_solve.c main.c \
		ft_checkfile.c ft_coord.c ft_read.c

OBJS = $(SRC:.c=.o)

HEADER = fillit.h

all : $(NAME)

$(NAME): $(OBJS)
	make -C libft
	gcc $(FLAGS) $(SRC) -o $(NAME) -I $(HEADER) -L libft -lft

.PHONY : clean

clean:
	make clean -C libft
	rm -f $(OBJS)

fclean : clean
	make fclean -C libft
	rm -f $(NAME)

re : fclean all
