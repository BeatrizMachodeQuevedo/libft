/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:36:50 by bemacho-          #+#    #+#             */
/*   Updated: 2024/05/16 13:18:56 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dest;

	i = 0;
	dest = (char *) big;
	if (len == 0 || *small == '\0' || ft_strlen(small) == 0 || big == small)
		return (dest);
	if (ft_strlen(small) > ft_strlen (big))
		return (NULL);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		if (big[i] == small[j])
		{
			while ((i + j) < len && small[j] && big[i + j] == small[j])
			{
				if (small[j + 1] == '\0')
					return ((char *)&big[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
