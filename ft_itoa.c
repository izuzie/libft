#include "libft.h"

size_t  number(int num)
{
    unsigned int    l;

    l = 0;
    if (num == 0)
        return (1);
    if (num < 0)
        l++;
    while (num)
    {
        num /= 10;
        l++;
    }
    return (l);
}

size_t  checknum(char *str, size_t i, int n)
{
    if (n < 0)
    {
        str[0] = '-';
        i = 1;
    }
    else
        i = 0;
    return (i);
    }

char    *ft_itoa(int n)
{
    char    *str;
    size_t  i;
    size_t  j;

    j = number(n);
    i = 0;
    str = (char *)malloc((j + 1));
    if (!str)
        return (NULL);
    str[j] = '\0';
    i = checknum(str, i, n);
    while (j-- > i)
    {
        if (n < 0)
        {
            str[j] = '0' + n % 10 * (-1);
            n = n / 10;
        }
        else
        {
            str[j] = '0' + n % 10;
            n = n / 10;
        }
    }
    return (str);
}