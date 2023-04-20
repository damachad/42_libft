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
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*str1;
	char	*source;
	size_t	i;

	str1 = dest;
	source = (char *)src;
	i = 0;
	while (i < n)
	{
		str1[i] = source[i];
		i++;
	}
	return (str1);
}
/*
int	main (void)
{
	const char src[10] = "sources";
	char dest[10] = "dest";
	char dest1[10] = "dest";

	printf("Before ft_memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, 3);
	printf("After ft_memcpy dest = %s\n", dest);
	printf("Before memcpy dest1 = %s\n", dest1);
	memcpy(dest1, src, 3);
	printf("After memcpy dest = %s\n", dest1);
	return(0);
}*/
