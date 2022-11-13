/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/10 22:00:55 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/10 22:16:27 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<string.h>
#include	"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (needle[i] == '\0')
		return (haystack);

