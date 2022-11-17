#include	"libft.h"

char	**ft_split(char const *s, char c)
{
	i = 0;
	j = 0;
	while (s[i] && ft_strchr(s[i], c))
	{
		while (!ft_strchr(s[j], c))
		{
