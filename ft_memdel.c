/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 18:38:53 by marvin            #+#    #+#             */
/*   Updated: 2025/06/17 18:38:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdel(void **ap);

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*new;

// 	new = ft_memalloc(3);
// 	printf("before : %p\n", new);
// 	ft_memdel((void *) &new);
// 	printf("after : %p\n", new);
// 	return (0);
// }
