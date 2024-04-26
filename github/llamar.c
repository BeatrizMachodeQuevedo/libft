/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   llamar.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:10:45 by bemacho-          #+#    #+#             */
/*   Updated: 2024/04/24 18:02:38 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stddef.h>
#include <stdlib.h>

int	 main(void)
{
	//int	A = 'a';
	//int letra  = 'i';
	//int F = 'i';
	//int	B = '2';
	//int	C = '=';
	//const char D[] = "33";
	//char s[] = "computer program";
	//char c[] = "pintar";
	//char	x = 'A';
	//char	y = ' ';
	//char	z = '/';
	//const char s2[] = "hola";
	//char e[] = "this is a test molon";
	//char g[] = "hola amigos igoigo";
	//char r[] = "hola";
	//char t[] = "mundo";
	//size_t ro = ft_strlcpy (c, s, 4);
	//char f = (char) ft_bzero(e,4);
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "hello";
	//char *ptr;
	//ptr = strnstr(largestring, smallstring, 7);
	char *ptr2 = ft_strnstr(largestring, smallstring, 7);
	char *pointer = ft_calloc (3, 3);
	//char *si = ft_strdup(s2);
	//char *no = ft_substr(s2, 1, 2);
	//char *sip = ft_strjoin(s2, D);
	//char *nop = ft_strjoin("a", "b");

	/*printf("%d.tiene que dar 1 \n", ft_isdigit(B));
	printf("%d.tiene que dar 1 \n", ft_isalpha(A));
	printf("%d.tiene que dar 0 \n", ft_isdigit(A));
	printf("%d.tiene que dar 0 \n", ft_isalpha(B));
	printf("%d.tiene que dar 1\n", ft_isalnum(A));
	printf("%d.tiene que dar 0\n", ft_isalnum(C));
	printf("%d.tiene que dar 1\n", ft_isascii(A));
	printf("%d.tiene que dar 1\n", ft_isascii(C));
	printf("%d.tiene que dar 1\n", ft_isprint(x));
	printf("%d.tiene que dar 1\n", ft_isprint(y));
	printf("%d.tiene que dar 1\n", ft_isprint(z));
	printf("%d.tiene que dar 4\n", ft_strlen(s2));
	printf("%d.tiene que dar A\n", ft_toup:per(A));
	printf("%d.tiene que dar A\n", toupper(A));
	printf("%d.tiene que dar a\n", ft_tolower(x));
	printf("%s.\n", memset(e, '*', 4));
    printf("%s.\n", ft_memset(e, '.', 4));*/
	//printf("%d.\n",f);
	//printf("%d.\n", (char) bzero(e,6));
	//printf("%d.\n", (char) ft_bzero(e,4));
	/*printf("%s.\n", ft_memcpy(s, c, 4));
	printf("%s.\n", memcpy(s, c, 4));
    printf("%s.\n", memmove(c, s, 4));
	printf("%s.\n", ft_memmove(c, s, 4));*/
	//printf("%lu.\n", strlcpy(c, s, 4));
	//printf("%lu.\n", ro);
	//printf("%lu.\n", strlcat(r, t, 4));
	//printf("%lu.\n", strlcat(r, t, 3));
	//printf("%lu.\n", ft_strlcat(r, t, 5));
	//printf("%lu.\n", ft_strlcat(r, t, 7));
	//printf("%s.\n", ft_strchr(g, letra));
	//printf("%s.\n", strchr(g, letra));
	//printf("%d.\n", atoi(D));
	//printf("%d.\n", ft_atoi(D));
	//printf("%s.\n", ptr);
	//printf("%s.\n", ptr2);
	//printf("%d.\n", ft_strncmp(smallstring, largestring, 6));
    //printf("%d.\n", strncmp(largestring, smallstring, 6));
	//printf("%s.\n", strrchr(g, letra));
	//printf("%s.\n", ft_strrchr(g, letra));
	//printf("%d.\n", memcmp(largestring, largestring, 3));
	//printf("%d.\n", memcmp(largestring, smallstring, 3));
	//printf("%d.\n", ft_memcmp(largestring, smallstring, 3));
	//printf("%d.\n", ft_memcmp(largestring, largestring, 3));
	//printf("%s.\n", ft_memchr(g, letra, 8));
	//printf("%s.\n", memchr(g, letra, 8));
	printf("%s.\n", &pointer[2]);
	//printf("%s.\n", si);
	//printf("%s.\n", no);
	//printf("%s.\n", ft_substr("Bonjour comment ca va?", 5, 8));
	//ft_putchar_fd('c', 1);
	//ft_putstr_fd(&ptr2[2], 1);
	ft_putendl_fd(&ptr2[2], 1); 
	//printf("%s.\n", sip);
	//printf("%s.\n", nop);
}
