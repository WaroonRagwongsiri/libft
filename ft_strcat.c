/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 23:01:37 by marvin            #+#    #+#             */
/*   Updated: 2025/06/15 23:01:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dst, const char *src);

char	*ft_strcat(char *dst, const char *src)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
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
// 	char	dst[50] = "def";
// 	char	src[] = "abc";
// 	ft_strcat(dst, src);
// 	printf("%s\n", dst);
// 	return (0);
// }
