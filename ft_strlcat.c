/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 16:11:19 by damachad          #+#    #+#             */
/*   Updated: 2023/04/13 16:11:22 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	dst_len;
	unsigned int	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	while (src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
		if (dst_len + i == size - 1)
			break ;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
int	main(void)
{
	char first[] = "This is ";
	char last[] = "a potentially long string";
	int r;
	int size = 36;
	char buffer[size];

	strcpy(buffer,first);
	r = ft_strlcat(buffer,last,size);
	puts(buffer);
	printf("Value returned: %d\n",r);
	if( r > size )
		puts("String truncated");
	else
		puts("String was fully copied");
	return(0);
}*/
