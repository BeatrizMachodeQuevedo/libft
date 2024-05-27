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

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	return (0);
}
int	main(void)
{
	int	x = 'B';
	int	y = '1';
	int	result1;
	int	result2;
	int	result3;
	int	result4;

	result1 = ft_isalpha(x);
	result2 = ft_isalpha(y);
	result3 = isalpha(x);
	result4 = isalpha(y);
	if (result1 == 1)
		printf("%d.\n Es Alpha", x);
		else printf("%d. no es alpha", x);
	printf("%d devuelve 0.\n", result2);
	printf("%d.\n devuelve distinto a zero", result3);
	printf("%d.\n devuelve 0", result4);
}
