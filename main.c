/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 22:02:45 by tberthie          #+#    #+#             */
/*   Updated: 2017/12/04 18:02:58 by tberthie         ###   ########.fr       */
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
	printf("ft_strlen('%s') = %zu\n", tmp, ft_strlen(tmp));
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

	printf("ft_cat('%s')\n", av[1]);
	int	fd = open(av[1], O_RDONLY);
	if (fd < 0)
		printf("Failed to open %s\n", av[1]);
	else
	{
		ft_cat(fd);
		close(fd);
	}
	printf("\n");

//	printf("ft_cat('%s') closed\n", av[1]);
//	ft_cat(fd);

	printf("ft_memalloc(10)\n");
	write(1, "'", 1);
	write(1, ft_memalloc(10), 10);
	write(1, "'\n", 2);
	return (0);
}
