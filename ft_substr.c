/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 12:34:46 by damachad          #+#    #+#             */
/*   Updated: 2023/04/12 12:36:17 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*s_dup;
	size_t	i;

	i = 0;
	s_dup = ft_strdup(s);
	sub = (char *)malloc(len + 1);
	while (i < len)
	{
		sub[i] = s_dup[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
int	main(void)
{
	printf("sub: %s\n", ft_substr("hello men", 2, 6));
	return (0);
}*/
