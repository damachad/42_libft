/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damachad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 10:07:25 by damachad          #+#    #+#             */
/*   Updated: 2023/04/14 10:08:13 by damachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = NULL;
	ptr = (void *)malloc(nitems * size);
	while (i < nitems)
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
/*
int	main(void)
{
	int	*a;
	int	i;
	int	n;

	i = 0;
	n = 5;
	a = (int *) ft_calloc(n, sizeof(int));
	if (a == NULL)
		printf("Memory not allocated\n");
	while (i < n)
	{
		printf("%d\n", a[i]);
		i++;
	}
	return 0;
}*/
