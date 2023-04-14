/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:05:07 by damachad          #+#    #+#             */
/*   Updated: 2023/04/12 12:05:37 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *)str;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == c)
			return (ptr + i);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*ptr1;

	ptr1 = ft_strchr("hello me", 'o');
	printf("%s", ptr1);
	return (0);
}*/
