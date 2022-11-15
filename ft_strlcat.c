#include	"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	if (size != 0 && dstlen < size)
	{
		ft_strlcpy(dst + dstlen, src, size - dstlen);
		return (dstlen + ft_strlen(src));
	}
	return (size + ft_strlen(src));
}
