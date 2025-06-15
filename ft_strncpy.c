/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 22:26:57 by marvin            #+#    #+#             */
/*   Updated: 2025/06/15 22:26:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *restrict src, size_t dsize);

char	*ft_strncpy(char *dst, const char *restrict src, size_t dsize)
{
	size_t	i;

	if (dsize == 0)
	{
		return (dst);
	}
	i = 0;
	while (i < dsize && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (i < (dsize - 1) && dst[i])
	{
		dst[i] = '\0';
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dst1[50] = "d";
// 	char	src1[] = "abcdefghi";
// 	char	dst2[50] = "d";
// 	char	src2[] = "abcdefghi";
// 	ft_strncpy(dst1, src1, 10);
// 	strncpy(dst2, src2, 10);
// 	printf("fake %s\n", dst1);
// 	printf("real %s\n", dst2);
// 	return (0);
// }
