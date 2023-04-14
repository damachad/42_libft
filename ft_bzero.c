/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:47:47 by damachad          #+#    #+#             */
/*   Updated: 2023/04/14 12:48:28 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	unsigned long	i;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
/*
void	ft_putstr2(char *str, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	str[10] = "hello me";

	printf("%s\n", str);
	ft_bzero(str, 2);
	ft_putstr2(str, 8);
}*/
