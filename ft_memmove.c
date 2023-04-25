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

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*source;
	char	temp[400];
	size_t	i;

	d = dest;
	source = (char *)src;
	i = 0;
	while (i < n)
	{
		temp[i] = source[i];
		i++;
	}
	temp[i] = '\0';
	i = 0;
	while (i < n)
	{
		d[i] = temp[i];
		i++;
	}
	return (d);
}
/*
int	main (void)
{
	const char src[10] = "sources";
	char dest[10] = "dest";
	char dest1[10] = "dest";

	printf("Before ft_memmove dest = %s\n", dest);
	ft_memmove(dest, src, 3);
	printf("After ft_memmove dest = %s\n", dest);
	printf("Before memmove dest1 = %s\n", dest1);
	memmove(dest1, src, 3);
	printf("After memmove dest = %s\n", dest1);
	return(0);
}*/
