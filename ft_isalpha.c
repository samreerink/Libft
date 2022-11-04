/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/05 12:51:04 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/04 17:31:31 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*
#include	<ctype.h>
#include	<stdio.h>
*/
#include	"libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	c;

	c = 'a';
	printf("DIY: %d\n", ft_isalpha(c));
	printf("OG: %d\n", isalpha(c));
}*/
