# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/20 22:18:00 by tberthie          #+#    #+#              #
#    Updated: 2017/12/04 20:53:40 by tberthie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS = $(addsuffix .o, $(addprefix ft_, bzero strcat isalpha isdigit \
	   isalnum isascii toupper tolower isprint puts strlen memset memcpy \
	   strdup cat memalloc memcmp strcpy strcmp strchr))

NAME = libfts.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	gcc -o test main.c libfts.a -I.

%.o: %.s
	nasm -f macho64 -o $@ $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f test

re: fclean all
