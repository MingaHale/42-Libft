#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (i < (n - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen (src));
}
//int main()
//{
//char dest[] = "Melike";
//char src[] = "hale";
//printf("%zu", ft_strlcpy(dest,src,4));
//}
