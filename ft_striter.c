/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 19:03:58 by marvin            #+#    #+#             */
/*   Updated: 2025/06/17 19:03:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *));

void	ft_striter(char *s, void (*f)(char *))
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(&s[i]);
		i++;
	}
}

// #include <stdio.h>

// void	set_a(char	*c)
// {
// 	*c = 'a';
// }

// int	main(void)
// {
// 	char	new[] = "abcdef";
// 	ft_striter(new, set_a);
// 	printf("%s\n", new);
// 	return (0);
// }
