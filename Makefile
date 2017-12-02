# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/20 22:18:00 by tberthie          #+#    #+#              #
#    Updated: 2017/12/02 20:44:37 by tberthie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NASM = ~/.brew/Cellar/nasm/2.13.01/bin/nasm

OBJS = $(addsuffix .o, $(addprefix objs/ft_, bzero strcat isalpha strlen))

NAME = libfts.a

all: objs $(NAME)

objs:
	mkdir objs

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	gcc -o test main.c libfts.a -I.

objs/%.o: srcs/%.s
	$(NASM) -f macho64 -o $@ $<

clean:
	rm -rf objs

fclean: clean
	rm -f $(NAME)

re: fclean all
