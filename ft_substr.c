/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/15 18:54:30 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/24 18:11:34 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include	<stdio.h>
#include	"libft.h"

static size_t	memory_size(char const *s, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (s[start] && i < len)
	{
		start++;
		i++;
	}
	return (i + 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*substr;

	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		substr = (char *)ft_calloc(sizeof(char), 1);
		if (!substr)
			return (0);
		return (substr);
	}
	i = memory_size(s, start, len);
	substr = (char *)ft_calloc(sizeof(char), i);
	if (!substr)
		return (0);
	i = 0;
	while (i < len && s[start])
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	return (substr);
}
/*
int	main(void)
{
	char	str[] = "";

	printf("%s\n", ft_substr(str, 5, 20));
}*/
