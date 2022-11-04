/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/24 15:55:04 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/04 17:41:30 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*
#include	<ctype.h>
#include	<stdio.h>
*/
#include	"libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
/*
int	main(void)
{
	unsigned char	c;
	unsigned char	d;

	c = '@';
	d = '@';
	printf("OG: %c\n", toupper(c));
	printf("DIY: %c\n", ft_toupper(d));
}*/
