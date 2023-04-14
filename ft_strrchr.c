/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:05:07 by damachad          #+#    #+#             */
/*   Updated: 2023/04/12 12:05:37 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *str, int c)
{
	int		l;
	char	*ptr;

	ptr = (char *)str;
	l = ft_strlen(ptr);
	while (l > 0)
	{
		if (ptr[l - 1] == c)
			return (ptr + l - 1);
		l--;
	}
	return (0);
}

int	main(void)
{
	printf("%s", ft_strrchr("hello me", 'l'));
	return (0);
}
