/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 09:22:04 by damachad          #+#    #+#             */
/*   Updated: 2023/04/13 09:22:41 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	inv(int *ptr)
{
	int	sign;

	sign = 1;
	*ptr *= -1;
	sign *= -1;
	return (sign);
}

int	count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count = 1;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*allocate(int count, int sign)
{
	char	*numb;

	if (sign > 0)
		numb = (char *)malloc(count + 1);
	else
		numb = (char *)malloc(count + 2);
	return (numb);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

char	*min(void)
{
	char	*numb;

	numb = (char *)malloc(12);
	numb = ft_strcpy(numb, "-2147483648");
	return (numb);
}

char	*into_array(char *str, int size, int sign, int n)
{
	str[size - 1] = '\0';
	while (size > 0)
	{
		str[size - 2] = (n % 10) + 48;
		n = n / 10;
		size--;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*numb;
	int		sign;
	int		n_digits;
	int		str_size;

	sign = 1;
	if (n == -2147483648)
		numb = min();
	if (n < 0 && n > -2147483648)
		sign = inv(&n);
	if (n > -2147483648)
	{
		n_digits = count(n);
		numb = allocate(n_digits, sign);
		if (sign < 0)
			str_size = n_digits + 2;
		else
			str_size = n_digits + 1;
		numb = into_array(numb, str_size, sign, n);
	}
	return (numb);
}
/*
int	main(void)
{
	char	*numb;

	numb = ft_itoa(42);
	printf("number: %s\n", numb);
}*/
