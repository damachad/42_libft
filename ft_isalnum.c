/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:14:15 by damachad          #+#    #+#             */
/*   Updated: 2023/04/11 13:15:28 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else if (c > 96 && c < 123)
		return (1);
	else if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	c;

	c = '{';
	printf("%d\n", ft_isalnum(c));
}*/
