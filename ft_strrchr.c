#include "libft.h"

char  *ft_strrchr(const char *s, int c)
{
  int i;
  int j;

  i = ft_strlen(s);
  j = (char)c;
  while (j == 0)
    return ((char *)s + i);
  while (i >= 0)
  {
    if (s[i] == j)
      return ((char *)s + i);
    i--;
  }
  return (0);
}