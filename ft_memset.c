#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *) b)[i] = c;
		i++;
	}
	return (b);
}
// #include <stdio.h>

// int main()
// {
// 	char str[] = "kocaeli";
// 	printf("%s", ft_memset(str, 8, 4));
// }
// c değeri len değeri kadar b dizisine kopyalanır.