/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:49:52 by damachad          #+#    #+#             */
/*   Updated: 2023/04/13 15:49:58 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	src_l;

	a = 0;
	src_l = 0;
	while (src[src_l] != '\0')
		src_l++;
	if (size > 0)
	{
		while (a < size - 1 && src[a] != '\0')
		{
			dst[a] = src[a];
			a++;
		}
		dst[a] = '\0';
	}
	return (src_l);
}

int main()
{
	char f1[] = "hi";
	char f2[] = "hello";
	size_t	a;
	
	a = ft_strlcpy(f1, f2, 6);
	printf("%zu\n", a);
	printf("%s\n", f1);
}
