/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_memcmp.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: sreerink <sreerink@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2024/05/24 17:13:10 by sreerink      #+#    #+#                 */
/*   Updated: 2024/05/24 17:17:00 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*caster_s1;
	unsigned char	*caster_s2;

	caster_s1 = (unsigned char *) s1;
	caster_s2 = (unsigned char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (caster_s1[i] != caster_s2[i])
			return (caster_s1[i] - caster_s2[i]);
		i++;
	}
	return (0);
}
