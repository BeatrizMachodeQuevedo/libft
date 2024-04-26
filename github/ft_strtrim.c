/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:49:27 by bemacho-          #+#    #+#             */
/*   Updated: 2024/04/24 14:04:22 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = (char *) malloc(ft_strlen(s1) * sizeof(char));
}
