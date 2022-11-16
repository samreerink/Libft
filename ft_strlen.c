/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/10 18:03:35 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/04 17:38:04 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include	<string.h>
//#include	<stdio.h>
#include	"libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	char	s[] = "";

	printf("DIY: %lu\n", ft_strlen(s));
	printf("OG: %lu\n", strlen(s));
}*/
