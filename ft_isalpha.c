/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 17:28:00 by marvin            #+#    #+#             */
/*   Updated: 2025/06/17 17:28:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c);

int	ft_isalpha(int c)
{
	unsigned char	new_c;

	new_c = c;
	if ((new_c >= 'A' && new_c <= 'Z')
		|| (new_c >= 'a' && new_c <= 'z'))
	{
		return (1024);
	}
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	printf("real %d\n", isalpha('z'));
// 	printf("fake %d\n", ft_isalpha('z'));
// 	return (0);
// }
