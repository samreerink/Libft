/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_check_end_str.c                                :+:    :+:             */
/*                                                    +:+                     */
/*   By: sreerink <sreerink@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2024/06/01 01:48:41 by sreerink      #+#    #+#                 */
/*   Updated: 2024/06/01 02:06:05 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_check_end_str(char *str, char *to_check)
{
	int	i;
	int	j;

	if (!str || !to_check)
		return (NULL);
	i = ft_strlen(str);
	j = ft_strlen(to_check);
	if (i < j)
		return (false);
	while (j >= 0)
	{
		if (to_check[j] != str[i])
			return (false);
		i--;
		j--;
	}
	return (true);
}
