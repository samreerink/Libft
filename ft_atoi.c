/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sreerink <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/12 18:49:55 by sreerink      #+#    #+#                 */
/*   Updated: 2022/11/12 20:12:21 by sreerink      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include	<stdio.h>
//#include	<stdlib.h>
#include	"libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	multi;

	i = 0;
	nb = 0;
	multi = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			multi *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	nb *= multi;
	return (nb);
}
/*
int	main(void)
{
	char	str1[] = "                  --	63636363-";
	char	str2[] = "                  --	63636363-";

	printf("OG: %i\n", atoi(str1));
	printf("DIY: %i\n", ft_atoi(str2));
}*/
