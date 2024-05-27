/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:58:56 by bemacho-          #+#    #+#             */
/*   Updated: 2024/04/11 12:30:52 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t			i;
	unsigned char	*x;

	x = (unsigned char *) dest;
	i = 0;
	while (i < n)
	{
		x[i] = (unsigned char) c;
		i++;
	}
	return (dest);
}
int	main(void)
{
	char x[] = "this is a test molon";
	ft_memset(x, '*', 4);
	printf("%s.\n",x);
}
