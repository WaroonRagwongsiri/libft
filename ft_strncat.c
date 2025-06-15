/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 23:34:55 by marvin            #+#    #+#             */
/*   Updated: 2025/06/15 23:34:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t ssize);

char	*ft_strncat(char *dst, const char *src, size_t ssize)
{
	size_t	i;
	size_t	j;

	if (ssize == 0)
	{
		return (dst);
	}
	i = 0;
	while (dst[i])
	{
		i++;
	}
	j = 0;
	while (src[j] && j < ssize)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dst[50] = "abc";
// 	char	src[] = "def";
// 	ft_strncat(dst, src, 3);
// 	printf("%s", dst);
// 	return (0);
// }
