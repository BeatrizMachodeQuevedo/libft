/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:56:06 by bemacho-          #+#    #+#             */
/*   Updated: 2024/04/10 12:41:33 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}
/*int	main(void)
{
	char ch;
	
	ch = 'G';
	printf("%c.\n", tolower(ch));
	printf("%c.\n", ft_tolower(ch));
	return(0);
}*/
