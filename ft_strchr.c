/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/24 18:49:26 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/04 17:37:39 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	<stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char			ch;
	char			*str;
	size_t			i;

	ch = (unsigned char) c;
	str = (char *) s;
	i = 0;
	if (str[i] == '\0' && str[i] != ch)
		return (0);
	while (str[i] != ch && )
		i++;
	if (str[i] == ch)
		return (str + i);
	return (0);
}

int	main(void)
{
	char	str1[7] = "test";
	char	str2[7] = "test";

	printf("OG: %s\n", strchr(str1, 'a'));
	printf("DIY: %s\n", ft_strchr(str2, 'a'));
}
