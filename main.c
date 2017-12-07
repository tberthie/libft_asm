/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 22:02:45 by tberthie          #+#    #+#             */
/*   Updated: 2017/12/07 19:44:23 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int			main(int ac, char **av)
{
	char	s1[20] = "Hello\0";
	char	s2[10] = " world!\0";
	char	*tmp;

	printf("ft_strlen('%s') = %zu\n", s1, ft_strlen(s1));
	printf("ft_strlen('%s') = %zu\n", s2, ft_strlen(s2));
	printf("\n");

	printf("ft_strcat('%s', '%s') = ", s1, s2);
	printf("'%s'\n", ft_strcat(s1, s2));
	printf("\n");

	tmp = strdup(s1);
	ft_bzero(tmp, ft_strlen(tmp));
	printf("ft_bzero('%s') = '%s'\n", s1, tmp);
	printf("\n");

	printf("ft_isalpha(%c) = %d\n", 'A', ft_isalpha('A'));
	printf("ft_isalpha(%c) = %d\n", 'Z', ft_isalpha('Z'));
	printf("ft_isalpha(%c) = %d\n", 'a', ft_isalpha('a'));
	printf("ft_isalpha(%c) = %d\n", 'z', ft_isalpha('z'));
	printf("ft_isalpha(%c) = %d\n", 64, ft_isalpha(64));
	printf("ft_isalpha(%c) = %d\n", 123, ft_isalpha(123));
	printf("\n");

	printf("ft_isdigit(%c) = %d\n", '0', ft_isdigit('0'));
	printf("ft_isdigit(%c) = %d\n", '9', ft_isdigit('9'));
	printf("ft_isdigit(%c) = %d\n", 47, ft_isdigit(47));
	printf("ft_isdigit(%c) = %d\n", 58, ft_isdigit(58));
	printf("\n");
	
	printf("ft_isalnum(%c) = %d\n", '0', ft_isalnum('0'));
	printf("ft_isalnum(%c) = %d\n", 'a', ft_isalnum('a'));
	printf("ft_isalnum(%c) = %d\n", 42, ft_isalnum(42));
	printf("\n");

	printf("ft_isascii(%d) = %d\n", -1, ft_isascii(-1));
	printf("ft_isascii(%d) = %d\n", 0, ft_isascii(0));
	printf("ft_isascii(%d) = %d\n", 127, ft_isascii(127));
	printf("ft_isascii(%d) = %d\n", 128, ft_isascii(128));
	printf("\n");
	
	printf("ft_isprint(%d) = %d\n", 39, ft_isprint(39));
	printf("ft_isprint(%d) = %d\n", 40, ft_isprint(40));
	printf("ft_isprint(%d) = %d\n", 176, ft_isprint(176));
	printf("ft_isprint(%d) = %d\n", 177, ft_isprint(177));
	printf("\n");

	printf("ft_toupper(%c) = %c\n", 'a', ft_toupper('a'));
	printf("ft_toupper(%c) = %c\n", 42, ft_toupper(42));
	printf("\n");
	
	printf("ft_tolower(%c) = %c\n", 'A', ft_tolower('a'));
	printf("ft_tolower(%c) = %c\n", 42, ft_tolower(42));
	printf("\n");

	tmp = strdup("Hello world");
	printf("ft_puts('%s')\n", tmp);
	ft_puts(tmp);
	printf("\n");

	tmp = strdup("******");
	printf("ft_memset('%s', '-', 3)\n", tmp);
	tmp = ft_memset(tmp, '-', 3);
	printf("%s\n\n", tmp);

	printf("ft_memcpy('%s', '***---', 6)\n", tmp);
	tmp = ft_memcpy(tmp, "***---", 6);
	printf("%s\n\n", tmp);

	printf("ft_strdup('%s')\n", s1);
	tmp = ft_strdup(s1);
	printf("%s\n\n", tmp);

	printf("ft_memalloc(10)\n");
	write(1, "'", 1);
	write(1, ft_memalloc(10), 10);
	write(1, "'\n\n", 3);

	printf("ft_strcpy(ft_memalloc(12), 'Hello world')\n");
	printf("%s\n\n", ft_strcpy(ft_memalloc(12), "Hello world"));

	printf("ft_memcmp('hello', 'hi', 1) = %d\n", ft_memcmp("hello", "hi", 1));
	printf("ft_memcmp('hello', 'hi', 2) = %d\n", ft_memcmp("hello", "hi", 2));
	printf("\n");

	printf("ft_strcmp('hello', 'world') = %d\n", ft_strcmp("hello", "world"));
	printf("ft_strcmp('hello', 'hello') = %d\n", ft_strcmp("hello", "hello"));
	printf("\n");

	printf("ft_strchr('hello world', '*') = '%s'\n", ft_strchr("hello world", '*'));
	printf("ft_strchr('hello world', ' ') = '%s'\n", ft_strchr("hello world", 32));
	printf("\n");

	int		fd;

	printf("ft_cat('Makefile')\n");
	fd = open("Makefile", O_RDONLY);
	ft_cat(fd);
	printf("\nft_cat([closed])\n");
	close(fd);
	ft_cat(fd);
	return (0);
}
