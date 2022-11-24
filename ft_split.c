/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/18 15:32:17 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/24 21:10:22 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>

static size_t	count_words(char const *s, char c);
static void		length_words(char const *s, char **arr, char c, size_t words);
static void		make_words(char const *s, char **arr, size_t i, size_t j);
static void		free_words(char **arr, size_t index);

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	words;

	if (!s)
		return (0);
	words = count_words(s, c);
	arr = ft_calloc(sizeof(char *), (words + 1));
	if (!arr)
		return (0);
	length_words(s, arr, c, words);
	return (arr);
}

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	word;

	i = 0;
	j = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[j] != c && s[j])
		{
			j++;
			if (s[j] == c || !s[j])
			{
				word++;
				i = j;
			}
		}
	}
	return (word);
}

static void	length_words(char const *s, char **arr, char c, size_t words)
{
	size_t	i;
	size_t	j;
	size_t	a;

	i = 0;
	j = 0;
	a = 0;
	while (s[i] && words > 0)
	{
		while (s[i] == c && s[i])
			i++;
		j = i;
		while (s[j] != c && s[j])
		{
			j++;
			if (s[j] == c || !s[j])
			{
				make_words(s, arr, i, j, a);
				a++;
				words--;
				i = j;
			}
		}
	}
}

static void	make_words(char const *s, char **arr, size_t i, size_t j, size_t a)
{
	arr[a] = ft_substr(s, i, j - i);
	if (!arr[a])
	{
		free_words(arr, a);
		return (0);
	}
}

static void	free_words(char **arr, size_t index)
{
	while (index != 0)
	{
		free(arr[index - 1]);
		index--;
	}
	free(arr);
}


int	main(void)
{
	char	**arr;

	arr = ft_split("tripouille", 0);
	printf("%s\n", arr[0]);
	printf("%s\n", arr[1]);
}
