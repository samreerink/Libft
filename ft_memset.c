/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 21:15:46 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/04 17:36:17 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*
#include	<string.h>
#include	<stdio.h>
*/
#include	"libft.h"

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
/*
int	main(void)
{
	int	c = 'A';
	int	len = 8;
	char	str1[7] = "HALLO";
	char	str2[7] = "HALLO";

	printf("DIY: %s\n", ft_memset(str2, c, len));
	printf("OG: %s\n", memset(str1, c , len));
	//Seems to be a difference between OG and DIY when not giving str a memory size.
}*/
