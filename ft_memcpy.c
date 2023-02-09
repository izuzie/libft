#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    char *d;
    char *s;

    i = 0;
    d = (char *)dest;
    s = (char *)src;
    if (!n || dest == src)
        return (dest);
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}