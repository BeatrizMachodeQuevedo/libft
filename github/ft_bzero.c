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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
//int	main(void)
//{
       //printf("Esta es la función BZERO:\n");
	//char	s[8] = "Hola Ana";
	//size_t	n = 1;
	//bzero(s, n);
	//printf("%s\n", s);
	//ft_bzero(s,n);
	//printf("%s\n", s);
	//printf("\n");*/	
	//char *x = malloc(5);
	//bzero(x, 3);
	//char	x[] = "this is a test molon";
	//char	r[] = "hola";
	//bzero(r,1);
	//ft_bzero(x,1);
	//printf("%s.\n", x);
	//printf("%s.\n", r);
//}
int main(void)
{
 	char str[] = "12345";
 	//int i = 0;
 	//int str_len = ft_strlen(str);

 	ft_bzero(str, 3);
	printf("%s", str);
 	//while (i++ < str_len)
 	//{
//if (str[i] == '\0')
//printf("%s", "0");
//printf("%c", str[i]);
 	//}
}

