/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/15 18:54:30 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/15 22:17:45 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include	<stdio.h>
#include	"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*substr;

	s_len = ft_strlen(s);
	i = 0;
	if (s == 0)
		return (0);
	if (start > s_len)
		len = 0;
	else if (s_len < len)
		len = s_len;
	substr = (char *)ft_calloc(sizeof(char), (len + 1));
	if (!substr)
		return (0);
	while (i < len && start <= s_len)
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
