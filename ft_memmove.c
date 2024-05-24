/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_memmove.c                                      :+:    :+:             */
/*                                                    +:+                     */
/*   By: sreerink <sreerink@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2024/05/24 17:13:30 by sreerink      #+#    #+#                 */
/*   Updated: 2024/05/24 17:17:00 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*caster_src;
	unsigned char	*caster_dst;
	size_t			i;

	caster_src = (unsigned char *) src;
	caster_dst = (unsigned char *) dst;
	i = 0;
	if (caster_src == caster_dst)
		return (caster_dst);
	if (caster_dst > caster_src)
	{
		while (len-- > 0)
			caster_dst[len] = caster_src[len];
	}
	else
	{
		while (i < len)
		{
			caster_dst[i] = caster_src[i];
			i++;
		}
	}
	return (caster_dst);
}
