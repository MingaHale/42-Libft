#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (n > i)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
	}
	return (dst);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	str []= "kocaeli";
// 	printf("%s" ,(char *) ft_memcpy (str+2,str,4));
// }