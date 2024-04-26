/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:44:21 by bemacho-          #+#    #+#             */
/*   Updated: 2024/04/23 17:47:34 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = (char *)malloc((len + ft_strlen(s) * sizeof(char)));
	if (!s || !dest)
		return (NULL);
	while (len != 0)
	{
		dest[i] = s[start];
		i++;
		start++;
		len--;
	}
	dest[i] = 0;
	return (dest);
}
