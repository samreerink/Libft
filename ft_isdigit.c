/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 14:21:10 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/04 17:32:28 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*
#include	<stdio.h>
#include	<ctype.h>
*/
#include	"libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int c;

	c = '4';
	printf("DIY: %d\n", ft_isdigit(c));
	printf("OG: %d\n", isdigit(c));
}*/
