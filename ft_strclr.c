/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:52:42 by marvin            #+#    #+#             */
/*   Updated: 2025/06/17 18:52:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s);

void	ft_strclr(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		s[i] = '\0';
		i++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	new[] = "abc";
// 	ft_strclr(new);
// 	printf("%s", &new[2]);
// 	return (0);
// }
