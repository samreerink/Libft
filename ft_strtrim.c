/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/16 17:49:26 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/16 21:17:23 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	str_len;
	char	*str;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (s1[i] == 0)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[j]))
		j--;
	str_len = j - i + 2;
	str = malloc(sizeof(char) * (str_len));
	if (!str)
		return (0);
	ft_strlcpy(str, s1 + i, str_len);
	return (str);
}

int	main(void)
{
	char	str[] = "       ";
	char	set[] = " ";

	printf("'%s'\n", ft_strtrim(str, set));
}
