/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:59:12 by bemacho-          #+#    #+#             */
/*   Updated: 2024/05/16 13:09:29 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	i = 0;
	len_dst = ft_strlen (dst);
	len_src = ft_strlen (src);
	if (dstsize == 0)
	{
		return (len_src);
	}
	if (dstsize <= len_dst)
		return (dstsize + len_src);
	while (i + len_dst + 1 < dstsize)
	{
		dst[len_dst + 1] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
