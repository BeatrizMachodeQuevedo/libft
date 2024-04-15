/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:29:53 by bemacho-          #+#    #+#             */
/*   Updated: 2024/04/12 11:54:46 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen (dst);
	len_src = ft_strlen (src);
	if (len_dst > len_src && len_dst > dstsize)
	{
		return (len_src);
	}
	if (len_src >= dstsize)
	{
		return (dstsize);
	}
	return (0);
}
