#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    char    *s;

    s = (char *)b;
    while (len > 0)
    {
        s[len - 1] = c;
        len--;
    }
    return (b);
}
