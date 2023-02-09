#include "libft.h"

char  *ft_strdup(const char *s)
{
  int   i;
  int   j;
  char  *str;

  i = 0;
  j = ft_strlen(s);
  str = malloc(j + 1);
  if (!str)
    return (0);
  while (i < j)
  {
    str[i] = s[i];
    i++;
  }
  str[i] = '\0';
  return (str);
}