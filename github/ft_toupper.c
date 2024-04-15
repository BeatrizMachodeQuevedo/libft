/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:16:53 by bemacho-          #+#    #+#             */
/*   Updated: 2024/04/10 12:42:40 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <xlocale.h>
//#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' || c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}
/*int	main(void)
{
	char ch;

	ch = 'g';
	printf("%c.\n", ft_toupper(ch));
    printf("%c.\n", toupper(ch));
	return(0);
}*/
