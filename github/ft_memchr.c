/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:49:58 by bemacho-          #+#    #+#             */
/*   Updated: 2024/04/17 12:52:49 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stddef.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	ch;
	unsigned char	*pointer;

	i = 0;
	ch = (unsigned char) c;
	pointer = (unsigned char *) s;
	while (i < n)
	{
		if (*pointer == ch)
		{
			return (pointer);
		}
		pointer++;
		i++;
	}
	return (0);
}
