/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 14:15:14 by bemacho-          #+#    #+#             */
/*   Updated: 2024/04/10 12:30:22 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, int n)
{
	int					i;
	unsigned char		*dest;
	const unsigned char	*fuente;

	dest = (unsigned char *) dst;
	fuente = (const unsigned char *) src;
	i = 0;
	while ((fuente[i] != '\0') && (n != 0))
	{
		dest[i] = fuente[i];
		i++;
		n--;
	}
	return (dst);
}
/*int  main(void)
{
	char fuente[] = "queh";
	char destino[4] = "";
	char fuente1[] = "queh";
	char destino1[4] = "";
	char fuente2[] = "regalo";
	char destino2[] = "para ti";
	char fuente3[] = "regalo  ";
	char destino3[] = "para ti";

	printf("%s.\n", memmove( destino, fuente, 2));
	printf("%s.\n", memmove(destino, fuente, 3));
	printf("%s.\n", memmove(destino3, fuente3, 8));

	printf("%s.\n", memcpy(destino1, fuente1, 2));
	printf("%s.\n", memcpy(destino1, fuente1, 3));
	printf("%s.\n", memcpy(destino2, fuente2, 8));
	return (0);
}*/	
