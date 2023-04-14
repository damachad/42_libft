/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:14:52 by damachad          #+#    #+#             */
/*   Updated: 2023/04/11 14:15:15 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	c;

	c = '2';
	printf("%d\n", ft_isprint(c));
	c = 'a';
	printf("%d\n", ft_isprint(c));
	c = 'B';
	printf("%d\n", ft_isprint(c));
	c = '\n';
	printf("%d\n", ft_isprint(c));
}*/
