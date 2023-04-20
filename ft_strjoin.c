/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 14:04:33 by damachad          #+#    #+#             */
/*   Updated: 2023/04/12 14:05:13 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	int		j_len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	j_len = ft_strlen(s1) + ft_strlen(s2);
	joined = (char *)malloc(j_len + 1);
	while (s1[i] != '\0')
	{
		joined[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		joined[i] = s2[j];
		i++;
		j++;
	}
	joined[i] = '\0';
	return (joined);
}
/*
int	main(void)
{
	char	str1[7] = "holla ";
	char	str2[6] = "carlo";
	char	*ptr1;

	ptr1 = ft_strjoin(str1, str2);
	printf("%s\n", ptr1);
}*/
