/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/16 16:45:11 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/16 17:40:05 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strjoin_free(char *s1, char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*new_str;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_str = malloc(sizeof(char) * s1_len + s2_len + 1);
	if (!new_str)
		return (0);
	ft_strlcpy(new_str, s1, s1_len + 1);
	free(s1);
	ft_strlcat(new_str, s2, s1_len + s2_len + 1);
	return (new_str);
}
