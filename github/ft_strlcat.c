/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:59:12 by bemacho-          #+#    #+#             */
/*   Updated: 2024/04/12 11:45:40 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char* dst, const char* src, size_t dstsize)
{
	size_t len_dst;
	size_t len_src;
	size_t res;
	size_t i;
	char* d;

	i = 0;
	res = 0;
	len_dst = ft_strlen (dst);
	d = (char*) dst;
	len_src = ft_strlen (src);
	if (dstsize > len_dst)
	{
		while ((i + len_dst + 1 < dstsize) && len_src != 0)
		{
			dst[len_dst + 1] = src[i];
			i++;
			len_src--;
		}
		res = ft_strlen (d);
	}
	else
	{
		res = dstsize; 
	}
	return (res);
}
