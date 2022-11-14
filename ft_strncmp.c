/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/27 19:58:46 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/04 17:40:35 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*
#include	<string.h>
#include	<stdio.h>
*/
#include	"libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while ((str1[i] != '\0' || str2[i] != '\0') && (i < n - 1)
		&& (str1[i] == str2[i]))
		i++;
	return (str1[i] - str2[i]);
}
/*
int	main(void)
{
	char	str1[15] = "@5";
	char	str2[15] = "@4";

	printf("OG: %i\n", strncmp(str1, str2, 2));
	printf("DIY: %i\n", ft_strncmp(str1, str2, 2));
}*/