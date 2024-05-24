/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:34:44 by bemacho-          #+#    #+#             */
/*   Updated: 2024/05/18 15:43:49 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_length(int n)
{
	int	length;

	length = 0;
	if (n <= 0)
		length++;
	while (n != 0)
	{
		length++;
		n /= 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	num;
	int				len;

	len = ft_length(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
	{
		str[0] = '-';
		num = n * -1;
	}
	else
		num = n;
	while (num != 0)
	{
		str[--len] = num % 10 + '0';
		num /= 10;
	}
	return (str);
}
