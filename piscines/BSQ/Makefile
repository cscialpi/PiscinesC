# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: cscialpi <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/25 14:54:58 by cscialpi     #+#   ##    ##    #+#        #
#    Updated: 2018/07/25 14:58:42 by cscialpi    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = bsq

OBJECTS = tracking.o display.o error.o function.o info.o main.o read.o

HEADERS = includes/error.h includes/function.h includes/struct.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(OBJECTS)

%.o:./srcs/%.c
	 gcc -I proto.h -c $^ -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
