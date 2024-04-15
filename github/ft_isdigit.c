/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:43:20 by bemacho-          #+#    #+#             */
/*   Updated: 2024/04/02 13:08:14 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isdigit(int arg)
{
	if ((arg >= '1') && (arg <= '9'))
	{
		return (1);
	}
	return (0);
}
/*int	main(void)
{
	char	x;
	char	y;

	x = '9';
	y = '+';
	printf("%d.\n", ft_isdigit(x));
	printf("%d.\n", ft_isdigit(y));
	printf("%d.\n", isdigit(x));
	printf("%d.\n", isdigit(y));
}*/
