# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/20 22:18:00 by tberthie          #+#    #+#              #
#    Updated: 2017/12/04 19:54:27 by tberthie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJS = $(addsuffix .o, $(addprefix ft_, bzero strcat isalpha isdigit \
	   isalnum isascii toupper tolower isprint puts strlen memset memcpy \
	   strdup cat memalloc memcmp strcpy strcmp strchr))

NAME = libfts.a

all: $(NAME)

test: $(NAME)
	gcc -o tst main.c libfts.a -I.
	./tst
	rm -f tst

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.s
	nasm -f macho64 -o $@ $<

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
