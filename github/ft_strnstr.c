/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:36:50 by bemacho-          #+#    #+#             */
/*   Updated: 2024/04/23 17:16:07 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	char *dest;

	i = 0;
	j = 0;
	dest = (char *) haystack;
	if (needle[0] == 0)
		return ((char*) haystack);
	if (ft_strlen(needle)  == 0 || haystack == needle)
		return (dest);
	while (len != 0 && haystack[i] != needle [0])
	{
		i++;
		j++;
		len--;
		return (dest);

		if (haystack[i] == needle[j])
		{
			return (dest);
		}
		i++;
		len--;
		return (NULL);
	}
	return(dest);
}
