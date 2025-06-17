/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:37:08 by marvin            #+#    #+#             */
/*   Updated: 2025/06/17 17:37:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c);

int	ft_isdigit(int c)
{
	unsigned char	new_c;

	new_c = c;
	if (new_c >= '0' && new_c <= '9')
	{
		return (2048);
	}
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("real %d\n", isdigit('9'));
// 	printf("fake %d\n", ft_isdigit('9'));
// 	return (0);
// }
