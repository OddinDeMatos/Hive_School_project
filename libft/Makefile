# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: odde-mat <odde-mat@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/10 13:46:43 by odde-mat          #+#    #+#              #
#    Updated: 2020/10/14 13:59:23 by odde-mat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_bzero.c ft_memcpy.c ft_memset.c ft_putchar.c ft_putnbr.c ft_putstr.c \
	ft_strcpy.c ft_strdup.c ft_strlen.c ft_strncpy.c ft_memccpy.c ft_strcmp.c \
	ft_strcat.c	ft_strncat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c \
	ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	ft_isprint.c ft_toupper.c ft_tolower.c ft_memalloc.c ft_memdel.c ft_strnew.c \
	ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c \
	ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_putendl.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strlcat.c \
	ft_itoa.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strsplit.c ft_memccpy.c \
	ft_wordcount.c ft_length_words.c ft_intlen.c ft_lstnew.c ft_lstdelone.c \
	ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c get_next_line.c \
	ft_strndup.c ft_putstrendl.c

OBJECT = $(SRCS:.c=.o)

INCLUDE =

FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCS)
	@gcc -c $(FLAG) $(SRCS) -I $(INCLUDE)
	@ar rc $(NAME) $(OBJECT)
	@ranlib $(NAME)

$(SRCS): $(INCLUDE)libft.h

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all