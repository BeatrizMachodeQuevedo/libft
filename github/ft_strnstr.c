/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:36:50 by bemacho-          #+#    #+#             */
/*   Updated: 2024/04/12 15:00:26 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	size_t long1;
	size_t long2;
	char *dest;
	

	i = 0;
	dest = (char *) haystack;
	long1 = ft_strlen(needle);
	long2 = ft_strlen(haystack);
	if (long1 == 0 || haystack == needle)
		return (dest);
	if (!haystack && !len)
		return (NULL);
	while (len <= long1 && long1 <= long2 && len != 0)
	{
		if (haystack[i] == needle[i])
		{
			return (dest);
		}
		i++;
		len--;
		while (haystack[i] =! needle[i])
		{
			return ('NULL');
		}
	return(dest);
}
