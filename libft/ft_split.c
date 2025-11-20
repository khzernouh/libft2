/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khzernou <khzernou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:28:50 by khzernou          #+#    #+#             */
/*   Updated: 2025/11/20 20:44:05 by khzernou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// static int	count_words(const char *s, char c)
// {
// 	int	count;
// 	int	i;

// 	count = 0;
// 	i = 0;
// 	while (s[i])
// 	{
// 		while (s[i] && s[i] == c)
// 			i++;
// 		if (s[i] && s[i] != c)
// 		{
// 			count++;
// 			while (s[i] && s[i] != c)
// 				i++;
// 		}
// 	}
// 	return (count);
// }

// static char	*alloc_word(const char *s, char c)
// {
// 	int		len;
// 	char	*word;

// 	len = 0;
// 	while (s[len] && s[len] != c)
// 		len++;
// 	word = malloc(len + 1);
// 	if (!word)
// 		return (NULL);
// 	len = 0;
// 	while (s[len] && s[len] != c)
// 	{
// 		word[len] = s[len];
// 		len++;
// 	}
// 	word[len] = '\0';
// 	return (word);
// }

// static void	free_split(char **split, int last)
// {
// 	while (last >= 0)
// 		free(split[last--]);
// 	free(split);
// }

// static void	skip_word(const char *s, char c, int *i)
// {
// 	while (s[*i] && s[*i] != c)
// 		(*i)++;
// }

// char	**ft_split(char const *s, char c)
// {
// 	char	**out;
// 	int		i;
// 	int		j;

// 	if (!s)
// 		return (NULL);
// 	out = malloc(sizeof(char *) * (count_words(s, c) + 1));
// 	if (!out)
// 		return (NULL);
// 	i = 0;
// 	j = 0;
// 	while (s[i])
// 	{
// 		while (s[i] && s[i] == c)
// 			i++;
// 		if (s[i])
// 		{
// 			out[j] = alloc_word(&s[i], c);
// 			if (!out[j])
// 				return (free_split(out, j - 1), NULL);
// 			j++;
// 			skip_word(s, c, &i);
// 		}
// 	}
// 	out[j] = NULL;
// 	return (out);
// }

#include "libft.h"

char **ft_split(char const *str, char c)
{
	if (!str || !c)
		return NULL;
	char **words;
	words = malloc();
}


                    //    string                    delimiter
// char **ft_split("Hello+Leyal+And+Sara+And+DJ", '+')

// ["Hello", "Leyal", "And", "Sara", "DJ"]
// free([  ,   ,   ,   ,   ])

// free("Helo")
// free("Leyal")

// free()

// check if string is empty or delimiter is empty return null
// count words
// allocate words array
// looping through words
//      allocate word 
// 		check if word is null free 
//      return NULL
// 		set newly allocated word to words array
// 		increase counter

// 0x01  0x02 0x03
// ['H', 'e', 'l', 'l', 'o']

// 0x11  0x12 0x13
// ['L', 'e', 'y', 'a', 'l']

// [0x01, 0x11]