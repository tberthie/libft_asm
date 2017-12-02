/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberthie <tberthie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 22:02:45 by tberthie          #+#    #+#             */
/*   Updated: 2017/12/02 21:20:15 by tberthie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

int			main(void)
{
	char	s1[4] = "Hi\0";
	char	s2[2] = "!\0";
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

	return (0);
}
