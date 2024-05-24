/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_strrchr.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: sreerink <sreerink@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2024/05/24 17:16:26 by sreerink      #+#    #+#                 */
/*   Updated: 2024/05/24 17:17:00 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			ch;
	char			*str;
	char			*save_ch;
	size_t			i;

	ch = (unsigned char) c;
	str = (char *) s;
	i = 0;
	save_ch = 0;
	while (ch == '\0')
	{
		if (str[i] == ch)
			return (str + i);
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			save_ch = str + i;
		i++;
	}
	return (save_ch);
}
