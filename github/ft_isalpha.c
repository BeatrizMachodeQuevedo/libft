/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:55:52 by bemacho-          #+#    #+#             */
/*   Updated: 2024/04/04 17:34:52 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>

int	ft_isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	return (0);
}
/*int	main(void)
{
	int	x;
	int	y;
	int	result1;
	int	result2;
	int	result3;
	int	result4;

	x = 'B';
	y = '?';
	result1 = ft_isalpha(x);
	result2 = ft_isalpha(y);
	result3 = isalpha(x);
	result4 = isalpha(y);
	printf("%d.\n", result1);
	printf("%d.\n", result2);
	printf("%d.\n", result3);
	printf("%d.\n", result4);
}*/
