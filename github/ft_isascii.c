/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:40:17 by bemacho-          #+#    #+#             */
/*   Updated: 2024/04/02 13:07:17 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
	{
		return (1);
	}
	return (0);
}

/*int	main(void)
{
	char	x = '>';
	int	y = '"';

	printf("%d.\n", ft_isascii(x));
	printf("%d.\n", isascii(x));
	printf("%d.\n", ft_isascii(y));
	printf("%d.\n", isascii(x));
}*/
