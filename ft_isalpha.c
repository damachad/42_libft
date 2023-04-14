/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:11:05 by damachad          #+#    #+#             */
/*   Updated: 2023/04/11 13:12:02 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	c;

	c = '4';
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
	c = 'b';
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
	c = 'C';
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
}
