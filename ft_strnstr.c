/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 00:45:33 by marvin            #+#    #+#             */
/*   Updated: 2025/06/16 00:45:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (big[0] == '\0')
		return ((char *) little);
	while (little[i] && i < len)
	{
		j = 0;
		if (little[i] == big[j])
		{
			while (big[j] == little[i + j] && big[j] != '\0'
				&& (i + j) < len && little[i + j] != '\0')
			{
				j++;
			}
			if (big[j] == '\0')
			{
				return ((char *) &little[i]);
			}
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s\n", ft_strnstr("abcdedef", "def", 8));
// 	return (0);
// }
