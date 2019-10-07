#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	dst_len;
	size_t	i;

	len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dstsize == 0 || dstsize < ft_strlen(dst))
		return (len);
	i = dst_len - 1;
	while ( i < dstsize - 2)
	{
		dst[i] = src[i];
		i++;
	}
	dst[dstsize - 1] = '\0';
	return (len + dst_len);
}
