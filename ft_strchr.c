#include "libft.h"

char  *ft_strchr(char const *s, int c)
{

  char  i;

  i = (char)c;
  while (*s != '\0')
  {
    if (*s == i)
      return ((char *)s);
    s++;
  }
  if (i == '\0')
    return ((char *)s);
  return (0);
}
