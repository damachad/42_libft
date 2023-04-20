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

#include "libft.h"
#include <stdio.h>

static int	count_words(const char *s, char delim)
{
	int		n;
	int		i;
	size_t	len;

	n = 0;
	i = 0;
	len = ft_strlen(s);
	while (s[i] != '\0')
	{
		if (s[i] == delim && s[i + 1] != delim)
			n++;
		i++;
	}
	if (s[0] == delim)
		n--;
	if (s[len - 1] != delim)
		n++;
	return (n);
}

static char	*ft_strdup2(const char *src, int beg, int end)
{
	int		i;
	size_t	l;
	char	*ptr;

	i = 0;
	l = ft_strlen(src);
	ptr = (char *)malloc((l + 1) * 1);
	if (!ptr)
		return (NULL);
	while (beg <= end)
	{
		ptr[i] = src[beg];
		beg++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	int		i;
	int		offset;
	int		j;

	i = 0;
	j = 0;
	offset = 0;
	words = (char **)malloc(count_words(s, c) + 1);
	if (!words)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c && i > offset)
		{
			words[j] = ft_strdup2(s, offset, i - 1);
			if (!words[j])
				return (NULL);
			offset = i + 1;
			j++;
		}
		i++;
	}
	words[j] = ft_strdup2(s, offset, i - 1);
	if (!words[j])
		return (NULL);
	j++;
	words[j] = NULL;
	return (words);
}

int	main(void)
{
	char	**words;
	int		i;
	int	n_words;
	char	c;
	char	str[] = "hola_yo_soy_dora_ad_ag_ht";

	i = -1;
	c = '_';
	n_words = count_words(str, c);
	words = (char **)malloc(n_words + 1);
	words = ft_split(str, c);
	while (i++ < n_words)
	{
		printf("%s\n", words[i]);
	}
/*	
	i = 0;
	while (words[i] != NULL)
	{
		free(words[i]);
		i++;
	}
	free(words);*/
}
