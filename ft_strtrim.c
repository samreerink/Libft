/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_strtrim.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: sreerink <sreerink@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2024/05/24 17:16:33 by sreerink      #+#    #+#                 */
/*   Updated: 2024/05/24 17:17:00 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	str_len;
	char	*str;

	i = 0;
	if (s1[i] == 0)
		return (ft_strdup(""));
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[j]) && i < j)
		j--;
	str_len = j - i + 1;
	str = ft_substr(s1, i, str_len);
	return (str);
}
