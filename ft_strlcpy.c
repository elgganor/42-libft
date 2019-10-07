#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while (i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[dstsize - 1] = '\0';
	return (len);
}
