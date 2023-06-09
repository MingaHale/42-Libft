#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
//#include <fcntl.h>
//
//int main()
//{
//	int fd = open("/Users/mminga/Desktop/test.txt", O_WRONLY);
//	ft_putendl_fd("404 not found error", fd);
//	}
// s dizisini fd dosyasına yazar ve bir alt satıra geçer.