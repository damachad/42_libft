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

#include "libft.h"

static int	count(int n)
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

static char	*allocate(int count, int sign)
{
	char	*numb;

	if (sign > 0)
		numb = (char *)malloc(count + 1);
	else
		numb = (char *)malloc(count + 2);
	return (numb);
}

static char	*into_array(char *str, int size, int sign, int n)
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
	{
		numb = ft_strdup("-2147483648");
		return (numb);
	}
	else if (n < 0)
	{
		n *= -1;
		sign *= -1;
	}
	n_digits = count(n);
	numb = allocate(n_digits, sign);
	if (sign < 0)
		str_size = n_digits + 2;
	else
		str_size = n_digits + 1;
	numb = into_array(numb, str_size, sign, n);
	return (numb);
}
/*
void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
	write(1, "\n", 1);
}

int	main(void)
{
	char	*numb;

	numb = ft_itoa(214748364);
	ft_print_result(numb);
}*/
