/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:02:21 by bemacho-          #+#    #+#             */
/*   Updated: 2024/04/11 15:53:58 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, int n)
{
	int					i;
	unsigned char		*dest;
	const unsigned char	*fuente;

	dest = (unsigned char *) dst;
	fuente = (const unsigned char *) src;
	i = 0;
	if (!dst && !src)
	{
		return (0);
	}
	while (i < n)
	{
		dest[i] = fuente[i];
		i++;
	}
	return (dst);
}
