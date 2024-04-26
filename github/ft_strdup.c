/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:37:43 by bemacho-          #+#    #+#             */
/*   Updated: 2024/04/17 12:50:07 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stddef.h>

char	*ft_strdup(const char *s1)
{
	char	*a;
	size_t	i;

	a = (char *)malloc(ft_strlen (s1));
	i = 0;
	while (i <= ft_strlen (s1))
	{
		a[i] = s1[i];
		i++;
	}
	return (a);
}
