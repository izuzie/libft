#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    long    i;
    char    c;

    i = n;
    if (i < 0)
    {
        write(fd, "-", 1);
        i *= -1;
    }
    if (i >= 10)
    ft_putnbr_fd(i / 10, fd);
    c = '0' + (i % 10);
    write(fd, &c, 1);
}