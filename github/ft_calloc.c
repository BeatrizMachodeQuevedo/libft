/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:10:33 by bemacho-          #+#    #+#             */
/*   Updated: 2024/04/24 18:01:13 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	int *pointer;

	pointer = (int *)malloc(size*count);
	if (pointer == 0)
		return (NULL);
	ft_bzero(pointer, count);
	return (pointer);
}
