/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bemacho- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:26:09 by bemacho-          #+#    #+#             */
/*   Updated: 2024/05/24 13:04:52 by bemacho-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

static size_t	count_words(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else
			if (*s == c && in_word)
				in_word = 0;
		s++;
	}
	return (count);
}

static char	*word_dup(const char *start, const char *end)
{
	size_t	len;
	char	*word;
	size_t	i;

	len = end - start;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	size_t		i;
	size_t		x;
	const char	*start;

	if (s == NULL)
		return (NULL);
	i = count_words(s, c);
	result = (char **)malloc((i + 1) * sizeof(char *));
	x = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = s;
			while (*s && *s != c)
				s++;
			result[x++] = word_dup (start, s);
		}
		else
			s++;
	}
	result[x] = NULL;
	return (result);
}
