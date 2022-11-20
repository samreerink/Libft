/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/18 15:32:17 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/20 21:23:42 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>

size_t	count_words(char const *s, char c);
void	length_words(char const *s, char **arr, char c, size_t max_words);
void	make_words(char const *s, char **arr, size_t i, size_t j);
void	free_words(char **arr, size_t index);

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
printf("%s\n", arr[0]);
printf("%s\n", arr[1]);
printf("%s\n", arr[2]);
printf("%s\n", arr[3]);
printf("%s\n", arr[4]);
printf("%s\n", arr[5]);
printf("%s\n", arr[6]);
printf("%s\n", arr[7]);
//printf("%s\n", arr[8]);
//printf("%s\n", arr[9]);
//printf("%s\n", arr[10]);
//	printf("%s\n", arr[11]);
	return (arr);
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
			if (s[j] == c || !s[j])
			{
				word++;
				i = j;
			}
		}
	}
	return (word);
}

void	length_words(char const *s, char **arr, char c, size_t max_words)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] && max_words > 0)
	{
		while (s[i] == c && s[i])
		{
			i++;
			j++;
		}
		while (s[j] != c && s[j])
		{
			j++;
			if (s[j] == c || !s[j])
			{
				make_words(s, arr, i, j);
				max_words--;
				i = j;
			}
		}
	}
}

void	make_words(char const *s, char **arr, size_t i, size_t j)
{
	static size_t	a;

	arr[a] = ft_substr(s, i, j - i);
	if (!arr[a])
		free_words(arr, a);
	a++;
}

void	free_words(char **arr, size_t index)
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
	//char	str[] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";

ft_split("          ", ' ');
}
