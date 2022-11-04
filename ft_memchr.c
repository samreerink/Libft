/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/28 22:10:24 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/04 17:34:41 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	<string.h>
#include	<stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
					i;
	unsigned char	*str;
	unsigned char	*ch;

	i = 0;
	str = (unsigned char *) s;
	ch = (unsigned char) c;
	while (str[i] != ch)
	{
		i++;
		if (str[i] == ch)
			return (&str[i]);

int	main(void)
{
	unsigned char	str1[8] = "Hallo!";
	//unsigned char	str2[8] = "Hallo!";
	
	printf("OG: 
