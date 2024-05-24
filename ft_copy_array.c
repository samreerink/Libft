/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_copy_array.c                                   :+:    :+:             */
/*                                                    +:+                     */
/*   By: sreerink <sreerink@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2024/05/24 16:28:29 by sreerink      #+#    #+#                 */
/*   Updated: 2024/05/24 17:09:12 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_copy_array(char **src)
{
	size_t	i;
	char	**new_array;

	i = 0;
	while (src[i])
		i++;
	new_array = ft_calloc(i + 1, sizeof(char *));
	if (!new_array)
		return (NULL);
	i = 0;
	while (src[i])
	{
		new_array[i] = ft_strdup(src[i]);
		if (!new_array[i])
		{
			ft_free_array(new_array);
			return (NULL);
		}
		i++;
	}
	return (new_array);
}
