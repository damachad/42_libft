/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 11:52:01 by damachad          #+#    #+#             */
/*   Updated: 2023/04/14 11:52:52 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*source;
	unsigned char	temp[n];
	unsigned long	i;

	d = dest;
	source = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		temp[i] = source[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		d[i] = temp[i];
		i++;
	}
	return (d);
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
/*
int	main(void)
{
	const char	src[10] = "sources";
	char		dest[10];

	ft_strcpy(dest, "Hello!");
	printf("Before memcpy dest = %s\n", dest);
	ft_memmove(dest, src, 3);
	printf("After memcpy dest = %s\n", dest);
	return (0);
}*/
