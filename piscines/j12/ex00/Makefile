# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/19 10:31:26 by cscialpi     #+#   ##    ##    #+#        #
#    Updated: 2018/07/19 12:06:54 by cscialpi    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = ft_display_file

SRC = ./*.c

SRC_O = ./*.o

FLAGS = -Werror -Wall -Wextra

HEADER = ./ft_display_file.h

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC) -I $(HEADER)
	gcc -o $(NAME) $(FLAGS) $(SRC_O) -I $(HEADER) 

clean:
	rm -f $(SRC_O)

fclean: clean
	rm -f $(NAME)

re: fclean all
