#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
//int main(void)
//{
//int i;
//char str [] = "hale";
//i = ft_strlen(str);
//ft_bzero(str, 4);
//write(1, &str, i);
//return (0);
//}
