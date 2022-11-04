/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 18:50:41 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/04 18:22:19 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*
#include	<string.h>
#include	<stdio.h>
*/
#include	"libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
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
/*
int	main(void)
{
//	char	dst1[] = "";
//	char	src1[] = "";
	char	dst2[] = "";
	char	src2[] = "";
	int		n;

	n = 4;
	//printf("OG: %s\n", memcpy(dst1, src1, n));
	printf("DIY: %s\n", ft_memcpy(dst2, src2, n));
}*/
