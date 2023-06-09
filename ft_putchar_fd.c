#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
//#include <fcntl.h>
//int main()
//{
//int 	fd = open("test.txt", 0_WRONLY);
//ft_putchar_fd('S', fd);
//printf("%d", fd);
//}
