/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/13 20:13:35 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/12 22:35:52 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*
#include	<string.h>
#include	<stdio.h>
*/
#include	"libft.h"

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
/*
int	main(void)
{
	char	dst1[] = "12345678";
	char	src1[] = "99999999";
	char	dst2[] = "12345678";
	char	src2[] = "99999999";
	int		len;

	len = 0;
	memmove(dst1 + 2, dst1, len);
	printf("OG: %s\n", dst1);
	ft_memmove(dst2 + 2, dst2, len);
	printf("DIY: %s\n", dst2);
}*/
