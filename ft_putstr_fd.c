#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write (fd, s, ft_strlen(s));
}
//#include <fcntl.h>
//
//int main()
//{
//	int	fd = open("/users/mminga/desktop/test.txt",0_WRONLY | 0_CREAT);
//	ft_putstr_fd("kediler sut icer",fd);
//	}
