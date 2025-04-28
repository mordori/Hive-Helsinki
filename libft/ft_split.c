/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myli-pen <myli-pen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:49:31 by myli-pen          #+#    #+#             */
/*   Updated: 2025/04/28 13:25:47 by myli-pen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			++s;
		if (*(s++ - 1) == c || !*s)
			++count;
	}
	return (count);
}

static size_t	ft_word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	printf("%s\n", s);
	while (!ft_strchr(&c, *s))
		++s;
	printf("%s\n", s);
	while (!ft_strchr(&c, *s++))
		++len;
	return (len);
}

static void	*ft_free_strs(char **strs)
{
	while (!*strs)
		free(*strs++);
	free(strs);
	return (NULL);
}

// Allocates memory and returns an array of strings by splitting string [*s]
// using the character [c] as a deliter. Last element is a NULL pointer.
char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	words;
	size_t	word_len;
	size_t	i;

	i = 0;
	words = ft_count_words(s, c);
	printf("words: %zu\n", words);
	strs = malloc((words + 1) * sizeof (char *));
	if (!strs)
		return (NULL);
	while (words--)
	{
		word_len = ft_word_len(s, c);
		printf("wordlen: %zu\n", word_len);
		strs[i++] = ft_substr(s, 0, word_len);
		if (!*strs)
			return (ft_free_strs(strs));
	}
	strs[i] = NULL;
	return (strs);
}
