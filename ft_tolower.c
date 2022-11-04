/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/24 18:04:30 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/04 17:41:08 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*
#include	<ctype.h>
#include	<stdio.h>
*/
#include	"libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}
/*
int	main(void)
{
	unsigned char	a;
	unsigned char	b;

	a = '!';
	b = '!';
	printf("OG: %c\n", tolower(a));
	printf("DIY: %c\n", ft_tolower(a));
}*/
