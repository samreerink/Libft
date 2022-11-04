/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 15:53:44 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/04 17:31:46 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*
#include	<ctype.h>
#include	<stdio.h>
*/
#include	"libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	c;

	c = -1;
	printf("DIY: %d\n", ft_isascii(c));
	printf("OG: %d\n", isascii(c));
}*/
