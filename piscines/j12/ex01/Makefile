# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/19 12:33:52 by cscialpi     #+#   ##    ##    #+#        #
#    Updated: 2018/07/19 13:37:48 by cscialpi    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = ft_cat

SRC = ./*.c

SRC_O = ./*.o

FLAGS = -Wall -Wextra -Werror

HEADER = ./ft_cat.h

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC) -I $(HEADER)
	gcc -o $(NAME) $(FLAGS) $(SRC_O) -I $(HEADER)

clean:
	rm -f $(SRC_O)

fclean: clean
	rm -f $(NAME)

re: fclean all
