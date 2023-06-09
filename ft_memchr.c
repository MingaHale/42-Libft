#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;

	d = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*d == (unsigned char)c)
			return (d);
		d++;
		i++;
	}
	return (NULL);
}
// #include <stdio.h>

// int main()
// {
// 	char *s = "hale";
// 	printf("%s", (char *)ft_memchr(s,'e',9));
// }