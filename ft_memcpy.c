/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_memcpy.c                                       :+:    :+:             */
/*                                                    +:+                     */
/*   By: sreerink <sreerink@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2024/05/24 17:13:22 by sreerink      #+#    #+#                 */
/*   Updated: 2024/05/24 17:17:00 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*src_caster;
	char			*dst_caster;
	unsigned long	i;

	src_caster = (char *) src;
	dst_caster = (char *) dst;
	i = 0;
	if (src_caster == dst_caster)
		return (dst_caster);
	while (i < n)
	{
		dst_caster[i] = src_caster[i];
		i++;
	}
	return (dst_caster);
}
