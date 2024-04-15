/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:22:59 by bemacho-          #+#    #+#             */
/*   Updated: 2024/04/04 17:38:58 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>

int	ft_isprint(int arg)
{
	if ((arg >= 32) && (arg <= 127))
	{
		return (1);
	}
	return (0);
}
/*int main(void)
{
	char x = 'A';
	char y = ' ';
	char z = '/';

	printf("%d.\n", ft_isprint(x));
	printf("%d.\n", isprint(x));
	printf("%d.\n", ft_isprint(y));
	printf("%d.\n", isprint(y));
	printf("%d.\n", ft_isprint(z));
	printf("%d.\n", isprint(z));
}*/
