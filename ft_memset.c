/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_memset.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: sreerink <sreerink@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2024/05/24 17:13:37 by sreerink      #+#    #+#                 */
/*   Updated: 2024/05/24 17:17:00 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str_caster;
	size_t			i;

	str_caster = (unsigned char *) b;
	i = 0;
	while (i < len)
	{
		str_caster[i] = c;
		i++;
	}
	return (str_caster);
}
