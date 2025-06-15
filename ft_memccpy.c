/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 20:31:25 by marvin            #+#    #+#             */
/*   Updated: 2025/06/15 20:31:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n);

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*new_dest;
	unsigned const char	*new_src;
	unsigned char		new_c;

	i = 0;
	new_dest = dest;
	new_src = src;
	new_c = c;
	while (i < n)
	{
		new_dest[i] = new_src[i];
		if (new_src[i] == new_c)
		{
			return (&new_dest[i + 1]);
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main()
// {
// 	char	p1[] = "abcd";
// 	char	p2[] = "defg";
// 	char	*p3;
// 	ft_memccpy(p2, p1, 'c', 5);
// 	printf("%s", p2);
// 	return(0);
// }
