/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <sreerink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/22 16:47:51 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/04 17:31:19 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*
#include	<ctype.h>
#include	<stdio.h>
*/
#include	"libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	int	c;

	c = 53;
	printf("DIY: %d\n", ft_isalnum(c));
	printf("OG: %d\n", isalnum(c));
}*/
