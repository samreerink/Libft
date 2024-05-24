/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::             */
/*   ft_itoa.c                                         :+:    :+:             */
/*                                                    +:+                     */
/*   By: sreerink <sreerink@student.codam.nl>        +#+                      */
/*                                                  +#+                       */
/*   Created: 2024/05/24 17:10:57 by sreerink      #+#    #+#                 */
/*   Updated: 2024/05/24 17:17:00 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	number_length(int n)
{
	size_t	length;

	length = 0;
	if (n <= 0)
		length++;
	while (n != 0)
	{
		length++;
		n /= 10;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			length;
	unsigned int	nb;

	length = number_length(n);
	str = malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		nb = (unsigned int)(n * -1);
		str[0] = '-';
	}
	else
		nb = (unsigned int)n;
	str[length] = '\0';
	while (nb > 0)
	{
		str[length - 1] = nb % 10 + '0';
		nb /= 10;
		length--;
	}
	return (str);
}
