# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: odde-mat <odde-mat@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/13 10:14:26 by odde-mat          #+#    #+#              #
#    Updated: 2020/10/14 11:52:38 by odde-mat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FdF

SRCS = main.c secondary.c read.c

OBJECT = $(SRCS:.c=.o)

INCLUDE = libft/libft.a

CFLAGS = -Wall -Wextra -Werror

MAKE = make

all: $(NAME)

$(NAME): $(OBJECT)
	$(MAKE) -C libft
	gcc $(CFLAGS) -c $(SRCS)
	gcc $(CFLAGS) -o $(NAME) $(OBJECT) $(INCLUDE) -L /usr/local/lib -lmlx -framework OpenGL \
	-framework Appkit

clean:
	$(MAKE) -C libft clean
	@rm -f $(OBJECT)

fclean: clean
	$(MAKE) -C libft fclean
	@rm -f $(NAME)

re: fclean all

