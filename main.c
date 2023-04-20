/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 11:04:22 by damachad          #+#    #+#             */
/*   Updated: 2023/04/19 11:05:20 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <strings.h>
#include <string.h>

static void	ft_putstr2(char *str, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	str[10] = "hello me";
	char	numb[] = " 	-98 3t5";
	char	a[7] = "abcdef";
	char	b[6] = "abcef";
	int		*ptr;
	int		i;

	i = 0;
	printf("ft_atoi: %d atoi: %d\n", ft_atoi(numb), atoi(numb));
	printf("str before ft_bzero: %s\n", str);
	ft_bzero(str, 2);
	printf("str after ft_bzero 2: \n");
	ft_putstr2(str, 8);
	bzero(str, 4);
	printf("\nstr after bzero 4: \n");
	ft_putstr2(str, 8);
	printf("\ncalloc 3: \n");
	ptr = (int *) ft_calloc(3, sizeof(int));
	if (ptr == NULL)
		printf("Memory not allocated\n");
	while (i < 3)
	{
		printf("%d\n", ptr[i]);
		i++;
	}
	printf("ft_isalnum(a): %d isalnum(a): %d\n", ft_isalnum('a'), isalnum('a'));
	printf("ft_isalnum(1): %d isalnum(1): %d\n", ft_isalnum('1'), isalnum('1'));
	printf("ft_isalnum(}): %d isalnum(}): %d\n", ft_isalnum('}'), isalnum('}'));
	printf("ft_isalpha(a): %d isalpha(a): %d\n", ft_isalpha('a'), isalpha('a'));
	printf("ft_isalpha(1): %d isalpha(1): %d\n", ft_isalpha('1'), isalpha('1'));
	printf("ft_isdigit(a): %d isdigit(a): %d\n", ft_isdigit('a'), isdigit('a'));
	printf("ft_isdigit(1): %d isdigit(1): %d\n", ft_isdigit('1'), isdigit('1'));
	printf("ft_isprint(a): %d isprint(a): %d\n", ft_isprint('a'), isprint('a'));
	printf("ft_isprint(\\n): %d isprint(\\n): %d\n", ft_isprint('\n'), isprint('\n'));
	printf("ft_isascii(a): %d isascii(a): %d\n", ft_isascii('a'), isascii('a'));
	printf("ft_isascii(): %d isascii(): %d\n", ft_isascii(200), isascii(200));
//	printf("ft_itoa(-98): %s itoa(): %s\n", ft_itoa(-98), itoa(-98));
	printf("ft_memchr(a, d, 5): %s memchr(a, d, 5): %s\n", (char *)ft_memchr(a, 'd', 5), (char *)memchr(a, 'd', 5));
	printf("ft_memcmp(a, b, 5): %d memcmp(a, b, 5): %d\n", ft_memcmp(a, b, 5), memcmp(a, b, 5));
	printf("ft_memcpy(ptr, a, 2): %s memcpy(ptr + 1, a + 1, 2): %s\n", (char *)ft_memcpy(ptr, a, 2), (char *)memcpy(ptr + 1, a + 1, 2));
//	printf("ft_memmove(b, a + 2, 2): %s memmove(b, a, 2): %s\n", (char *)ft_memmove(b, a + 2, 5), (char *)memmove(b, a, 2));
	free(ptr);
	return 0;
}


