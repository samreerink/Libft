/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/28 22:10:24 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/05 19:03:35 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*
#include	<string.h>
#include	<stdio.h>*/
#include	"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	ch;

	i = 0;
	str = (unsigned char *) s;
	ch = (unsigned char) c;
	while (i < n)
	{
		if (str[i] == ch)
			return (str + i);
		i++;
	}
	return (0);
}/*

int	main(void)
{
	unsigned char	str1[] = {0, 1, 2, 3, 4, 5};
	
	printf("%p\n", str1 + 2);
	printf("OG: %p\n", memchr(str1, 2, 3));
	printf("DIY: %p\n", ft_memchr(str1, 2, 3));
}*/
