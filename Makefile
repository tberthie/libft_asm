# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/20 22:18:00 by tberthie          #+#    #+#              #
#    Updated: 2017/12/04 16:35:30 by tberthie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NASM = ~/.brew/Cellar/nasm/2.13.01/bin/nasm

OBJS = $(addsuffix .o, $(addprefix ft_, bzero strcat isalpha isdigit \
	   isalnum isascii toupper tolower isprint puts strlen memset memcpy \
	   strdup cat))

NAME = libfts.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	##
	gcc -o test main.c libfts.a -I.

%.o: %.s
	$(NASM) -f macho64 -o $@ $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)
	##
	rm -f test

re: fclean all
