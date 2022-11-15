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
	size_t	j;
	size_t	sub_size;
	char	*substr;

	i = start;
	j = 0;
	if (!s)
		substr = (char *)ft_calloc(sizeof(char), 1);
	else
	{
		sub_size = (ft_strlen(s + start)) + 1;
		substr = (char *)ft_calloc(sizeof(char), sub_size);
	}
	if (!substr)
		return (0);
	while (s[i] && j < len)
	{
		substr[j] = s[i];
		i++;
		j++;
	}
	return (substr);
}
/*
int	main(void)
{
	char	str[] = "i just want this part #############";

	printf("%s\n", ft_substr(str, 5, 20));
}*/
