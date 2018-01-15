# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marezgui <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 08:40:25 by marezgui          #+#    #+#              #
#    Updated: 2018/01/15 09:01:29 by marezgui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## TARGET
NAME = libft.a

## COMPILER
FLAGS = -Weverything

## INCLUDES
INCLUDES = includes/libft.h

## SOURCES
SRCDIR = srcs/
SRCFILES = ft_atoi.c ft_sqrt.c ft_div_mod.c ft_strrev.c ft_intlen.c\
	ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c \
	ft_memmove.c ft_memset.c ft_bzero.c ft_putstr.c ft_putstr_fd.c ft_strcat.c \
	ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c \
	ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
	ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c \
	ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c \
	ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_putchar.c \
	ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c \
	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_atoi.c \
	ft_itoa.c ft_tolower.c ft_toupper.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c \
	ft_lstiter.c ft_lstlen.c ft_lstmap.c ft_lstnew.c
SRCS = $(addprefix $(SRCDIR), $(SRCFILES))

## OBJECTS
OBJDIR = objs/
OBJFILES = $(SRCFILES:.c=.o)
OBJS = $(addprefix $(OBJDIR), $(OBJFILES))

###############
#### RULES ####
###############

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJS)
	ar -q $@ $(OBJS)
	ranlib $@

$(OBJDIR):
	    mkdir -p $(OBJDIR)

$(OBJDIR)%.o: $(SRCDIR)%.c
	gcc $(FLAGS) -I $(INCLUDES) -o $@ -c $<

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
