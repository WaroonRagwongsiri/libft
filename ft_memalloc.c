/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:28:00 by marvin            #+#    #+#             */
/*   Updated: 2025/06/17 18:28:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size);

void	*ft_memalloc(size_t size)
{
	unsigned char	*new_ptr;
	size_t			i;

	i = 0;
	new_ptr = NULL;
	new_ptr = malloc(size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		new_ptr[i] = 0;
		i++;
	}
	return (new_ptr);
}

// #include <stdio.h>

// int	main()
// {
// 	int	*arr;
// 	arr = ft_memalloc(sizeof(int) * 4);
// 	for (size_t i = 0; i < 4; i++)
// 	{
// 		printf("%ld : %d\n", i, arr[i]);
// 	}
// 	free(arr);
// 	return (0);
// }
