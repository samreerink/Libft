/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_free_array.c                                   :+:    :+:             */
/*                                                    +:+                     */
/*   By: sreerink <sreerink@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2024/05/24 16:54:54 by sreerink      #+#    #+#                 */
/*   Updated: 2024/05/24 17:07:38 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_array(char **array)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		array[i] = NULL;
		i++;
	}
	free(array);
	array = NULL;
}
