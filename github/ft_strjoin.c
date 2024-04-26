/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:09:27 by bemacho-          #+#    #+#             */
/*   Updated: 2024/04/23 16:00:56 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		z;
	char		*result;

	i = 0;
	z = 0;
	result = (char *)malloc((ft_strlen(s2) + ft_strlen(s1) +1) * sizeof(char));
	if (!s1 || !s2 || !result)
		return (NULL);
	while (i <= ft_strlen(s1))
	{
		result[i] = s1[i];
		i++;
	}
	while (z <= ft_strlen(s2))
	{
		result[ft_strlen(s1) + z] = s2[z];
		z++;
	}
	result[ft_strlen(s1) + z + 1] = 0;
	return (result);
}
