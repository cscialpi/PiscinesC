# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/16 18:33:29 by cscialpi     #+#   ##    ##    #+#        #
#    Updated: 2018/07/16 20:29:07 by cscialpi    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

SRC_O = ./ft_putchar.o ./ft_putstr.o ./ft_strlen.o ./ft_strcmp.o ./ft_swap.o

FLAGS = -c -Werror -Wall -Wextra

HEADER = ./includes/ft_putchar.h ./includes/ft_putstr.h ./includes/ft_strlen.h ./includes/ft_strcmp.h ./includes/ft_swap.h

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRC) -I $(HEADER)
	ar rc $(NAME) $(SRC_O)
	ranlib $(NAME)

clean:
	rm -f $(SRC_O)

fclean: clean
	rm -f $(NAME)

re: fclean all
