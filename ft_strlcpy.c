/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/10 14:22:30 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/10 18:32:05 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include	<stdio.h>
//#include	<string.h>
#include	"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	src1[] = "Hallo";
	char	src2[] = "Hallo";
	char	dst1[] = "aaaaaaaaaaaa";
	char	dst2[] = "aaaaaaaaaaaa";

	printf("OG: %lu\n", strlcpy(dst1, src1, 5));
	printf("%s\n", dst1);
	printf("DIY: %lu\n", ft_strlcpy(dst2, src2, 5));
	printf("%s\n", dst2);
}*/
