/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/04 19:11:28 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/04 19:24:02 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
/*
#include	<string.h>
#include	<stdio.h>
*/
#include	"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			ch;
	char			*str;
	char			*save_ch;
	unsigned long	i;

	ch = (unsigned char) c;
	str = (char *) s;
	i = 0;
	save_ch = 0;
	if (ch == '\0')
		return (ft_strchr(str, '\0'));
	while (str[i] != '\0')
	{
		if (str[i] == ch)
			save_ch = str + i;
		i++;
	}
	return (save_ch);
}
/*
int	main(void)
{
	char	str1[] = "lahho!";
	char	str2[] = "lahho!";

	printf("OG: %s\n", strrchr(str1, 'l'));
	printf("DIY: %s\n", ft_strrchr(str2, 'l'));
}*/
