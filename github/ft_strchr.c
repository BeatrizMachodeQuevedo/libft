/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:19:28 by bemacho-          #+#    #+#             */
/*   Updated: 2024/04/15 12:13:41 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	char	*pointer;

	ch = (char) c;
	pointer = (char *)s;
	while (*pointer != ch)
	{
		if (*pointer == '\0')
		{
			return (0);
		}
		pointer++;
	}
	return (pointer);
}
/*int	 main(void)
{
	const char s [] = "computer program";
	int c = 'p';
	printf("%s.\n", strchr(s, c));
	printf("%s.\n", ft_strchr(s,c));
	return(0);
}*/
