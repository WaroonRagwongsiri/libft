/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:44:42 by marvin            #+#    #+#             */
/*   Updated: 2025/06/17 18:44:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size);

char	*ft_strnew(size_t size)
{
	char	*new_str;
	size_t	i;

	i = 0;
	new_str = malloc(size);
	if (new_str == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		new_str[i] = '\0';
		i++;
	}
	return (new_str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*new;

// 	new = ft_strnew(5);
// 	for (size_t i = 0; i < 5; i++)
// 	{
// 		printf("%ld : %c\n", i, new[i]);
// 	}
// 	new[0] = 'e';
// 	for (size_t i = 0; i < 5; i++)
// 	{
// 		printf("%ld : %c\n", i, new[i]);
// 	}
// 	free(new);
// 	return (0);
// }
