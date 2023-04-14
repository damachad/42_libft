/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:07:30 by damachad          #+#    #+#             */
/*   Updated: 2023/04/14 12:08:22 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned long	i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*ptr;

	ptr = ft_memchr("hello me", 'o', 3);
	printf("%s", ptr);
	return (0);
}*/
