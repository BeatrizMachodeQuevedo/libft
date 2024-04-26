/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:20:00 by bemacho-          #+#    #+#             */
/*   Updated: 2024/04/24 17:56:55 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include <stddef.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*int	main(void)
{
	char	x[] = "this is a test molon";
	char	y = (char) bzero(x,4);
	//char	z[] = (char) ft_bzero(x,4);
	printf("%d.\n", y);
	//printf("%s.\n", z);
}*/
