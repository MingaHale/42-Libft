#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	res = malloc(count * size);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, count * size);
	return (res);
}
// #include <stdio.h>
// int main()
// {
// 	char *str;	
// 	str = calloc(3,3);
// 	printf("%s", str);
// }
