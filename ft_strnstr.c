/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:13:12 by damachad          #+#    #+#             */
/*   Updated: 2023/04/13 14:14:23 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned long	i;
	unsigned long	j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)big;
	while (little[j] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0' && i < len)
	{
		while (str[i + j] != '\0' && str[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
/*
int	main(void)
{
	char a[21] = "who let the dogs out";
	char b[4] = "dog";

	printf("%s\n", ft_strnstr(a, b, 18));
}*/
