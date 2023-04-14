/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 11:41:13 by damachad          #+#    #+#             */
/*   Updated: 2023/04/12 11:42:23 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned long	i;
	unsigned char	*s2;

	s2 = s;
	i = 0;
	while (i < n)
	{
		s2[i] = c;
		i++;
	}
	return (s2);
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

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	str[10];

	ft_strcpy(str, "hello men\n");
	ft_putstr(str);
	ft_memset(str, 'w', 3);
	ft_putstr(str);
	return (0);
}*/
