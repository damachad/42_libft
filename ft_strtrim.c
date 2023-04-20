/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:35:10 by damachad          #+#    #+#             */
/*   Updated: 2023/04/12 14:35:48 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	is_set(char const str_i, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == str_i)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	beg;
	size_t	end;
	size_t	i;

	i = 0;
	beg = 0;
	end = ft_strlen(s1) - 1;
	while (is_set(s1[beg], set) == 1)
		beg++;
	while (is_set(s1[end], set) == 1)
		end--;
	trim = (char *)malloc(end - beg + 2);
	while (beg <= end)
	{
		trim[i] = s1[beg];
		beg++;
		i++;
	}
	trim[i] = '\0';
	return (trim);
}
/*
int	main(void)
{
	printf("%s", ft_strtrim("123abc321", "0123456789"));
}*/
