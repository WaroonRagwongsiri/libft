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

char	*ft_strcat(char *restrict dst, const char *restrict src);

char	*ft_strcat(char *restrict dst, const char *restrict src)
{
	int	i;
	int	j;

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
