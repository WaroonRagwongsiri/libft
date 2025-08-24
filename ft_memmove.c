/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 20:57:29 by marvin            #+#    #+#             */
/*   Updated: 2025/06/15 20:57:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*new_dest;
	const char	*new_src;

	new_dest = dest;
	new_src = src;
	if (!src || !dest)
		return (dest);
	if (ft_strlen(dest) <= ft_strlen(src))
		ft_memcpy(dest, src, n);
	else
	{
		while (n > 0)
		{
			new_dest[n - 1] = new_src[n - 1];
			n--;
		}
	}
	dest = new_dest;
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
// 	char sResult2[] = {67, 67, 68, 68, 69, 0, 45};

// 	// ft_memmove(sResult + 1, sResult, 2);
// 	// sResult + 1 && !memcmp(sResult, sResult2, 7);
// 	// ft_memmove(sResult + 1, sResult, 2) == sResult + 1 && !memcmp(sResult, sResult2, 7);
// 	printf("%s", sResult);
// 	printf("%s", sResult2);
// 	printf("%d", (ft_memmove(sResult + 1, sResult, 2) == sResult + 1 && !memcmp(sResult, sResult2, 7)));
// 	return (0);
// }
