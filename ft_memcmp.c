/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/10 20:19:35 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/12 20:56:04 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include	<stdio.h>
//#include	<string.h>
#include	"libft.h"

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
/*
int	main(void)
{
	unsigned char	s1[] = "\0";
	unsigned char	s2[] = "\0";

	printf("OG: %d\n", memcmp(s1, s2, 1));
	printf("DIY: %d\n", ft_memcmp(s1, s2, 1));
}*/
