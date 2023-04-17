/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:25:48 by damachad          #+#    #+#             */
/*   Updated: 2023/04/13 15:26:17 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
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

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**words;
	int		i;
	int		offset;
	int		j;

	i = 0;
	j = 0;
	offset = 0;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			offset = i;
			words[j] = ft_strdup(str)
		}
		i++;
	}
}
