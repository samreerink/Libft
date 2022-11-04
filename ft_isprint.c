/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 17:10:13 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/04 17:32:38 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*
#include	<ctype.h>
#include	<stdio.h>
*/
#include	"libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	c;

	c = 31;
	printf("DIY: %d\n", ft_isprint(c));
	printf("OG: %d\n", isprint(c));
}*/
