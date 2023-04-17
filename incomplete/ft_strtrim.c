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

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char const*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		len;
	int		begin;
	int		end;

	begin = 0;
	len = ft_strlen(s1);
	end = len - 1;
	trim = (char *)malloc(len + 1);
	while (s1[begin] == set[begin])
		begin++;
	while (s1[end] == ' ' || (s1[end] >= 9 && s1[end] <= 13))
		end--;
}

int	main(void)
{
	char const	str[10] = "  hello  ";
	char const	set;

	printf("%s", ft_strtrim(str));
}
