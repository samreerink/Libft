/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <sreerink@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/22 16:46:26 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/04 17:31:08 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*
#include	<strings.h>
#include	<stdio.h>
*/
#include	"libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str_caster;
	size_t			i;

	str_caster = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		str_caster[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char	s1[20] = "Hallo";
	char	s2[20] = "Hallo";

	bzero(s1, 3);
	ft_bzero(s2, 3);
	printf("DIY: %s\n", s1);
	printf("OG: %s\n", s2);
}*/
