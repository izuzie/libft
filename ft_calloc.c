#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *i;
    size_t  j;

    j = count * size;
    if (count != 0 && j / count != size)
        return (0);
    i = malloc(j);
    if (!i)
        return (0);
    ft_bzero(i, count * size);
    return (i);
}