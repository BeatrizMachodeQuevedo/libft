/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:34:18 by bemacho-          #+#    #+#             */
/*   Updated: 2024/04/04 17:33:48 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z'))
		|| ((c <= 1) && (c >= 9)))
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	char	x = 'A';
	char	y = '?';

	printf("%d.\n", isalnum(x));
	printf("%d.\n", isalnum(y));
	printf("%d.\n", ft_isalnum(x));
	printf("%d.\n", ft_isalnum(y));
}*/
