/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:10:33 by bemacho-          #+#    #+#             */
/*   Updated: 2024/05/16 13:05:27 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	int	*pointer;

	pointer = (int *)malloc(size * count);
	if (pointer != 0)
		ft_memset(pointer, 0, size * count);
	return (pointer);
}
