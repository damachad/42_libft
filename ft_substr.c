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

#include <stdlib.h>
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

char	*ft_strdup(const char *src)
{
	int		l;
	int		i;
	char	*ptr;

	i = 0;
	l = ft_strlen(src);
	ptr = (char *)malloc((l + 1) * 1);
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

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

int	main(void)
{
	printf("sub: %s\n", ft_substr("hello men", 2, 6));
	return (0);
}
