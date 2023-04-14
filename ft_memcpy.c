/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:19:48 by damachad          #+#    #+#             */
/*   Updated: 2023/04/14 11:20:49 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*source;
	unsigned long	i;

	str1 = dest;
	source = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		str1[i] = source[i];
		i++;
	}
	return (str1);
}
/*
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

int	main (void)
{
	const char src[10] = "sources";
	char dest[10];

	ft_strcpy(dest,"Hello!");
	printf("Before memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, 3);
	printf("After memcpy dest = %s\n", dest);
	return(0);
}*/
