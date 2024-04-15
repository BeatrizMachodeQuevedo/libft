/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:36:37 by bemacho-          #+#    #+#             */
/*   Updated: 2024/04/12 12:57:16 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = ft_strlen(s);
	ch = (char) c;
	while (i >= 0)
	{
		if (s[i] == ch)
		{
			return ((char *) &s[i]);
		}
		i--;
	}
	return (0);
}
