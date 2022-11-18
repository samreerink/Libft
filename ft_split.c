/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/18 15:32:17 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/18 22:10:35 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

size_t	count_words(char const *s, char c);
char	**make_words(char **arr, char c);
void	free_arr(char **arr, size_t arrays);

char	**ft_split(char const *s, char c)
{
	char	**arr;

	arr = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!arr)
		return (0);
}

size_t	count_words(char const *s, char c)
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
		{
			i++;
			j++;
		}
		while (s[j] != c && s[j])
		{
			j++;
			if (s[j] == c && s[j])
			{
				word++;
				i = j;
			}
		}
	}
	return (word);
}

char	**make_words(char **arr, char *s, )
{
	size_t	i;
	size_t	j;
	size_t	a;

	i = 0;
	j = 0;
	a = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
		{
			i++;
			j++;
		}
		while (s[j] != c && s[j])
		{
			j++;
			if (s[j] == c && s[j])
			{
				arr[a] = ft_substr(s, i, j - i);
				a++;
				i = j;
			}
		}
	}
	return (arr);
}
