#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
// #include <stdio.h>
// void ft_42(unsigned int a,char *c)
// {
// 	*c = ft_toupper(*c);
// }
// #include <stdio.h>
// int main()
// {
// 	char str[] = "Merhaba42";
// 	printf("%s\n", str);
// 	ft_striteri(str, ft_42);
// 	printf("%s\n", str);
// }
