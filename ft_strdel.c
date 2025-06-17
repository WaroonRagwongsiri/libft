/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:49:36 by marvin            #+#    #+#             */
/*   Updated: 2025/06/17 18:49:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdel(char **as);

void	ft_strdel(char **as)
{
	free(*as);
	*as = NULL;
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*new;

// 	new = malloc(5);
// 	printf("new : %p\n", new);
// 	ft_strdel(&new);
// 	printf("new : %p\n", new);
// 	return (0);
// }
