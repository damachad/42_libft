/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:37:24 by damachad          #+#    #+#             */
/*   Updated: 2023/04/11 14:37:52 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == '+')
		i++;
	if (nptr[i] == '-' && nptr[i - 1] == '+')
		return (sign * result);
	if (nptr[i - 1] == '+' && nptr[i - 2] == '+')
		return (sign * result);
	if (nptr[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * result);
}
/*
int	main(void)
{
	char	str[] = "-48";

	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
}*/
