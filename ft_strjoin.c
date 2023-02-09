#include "libft.h"

char  *ft_strjoin(char const *s1, char const *s2)
{
  char  *newstr;
  int   i;
  int   j;

  if (s1 == NULL || s2 == NULL)
    return (0);
  newstr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
  if (!newstr)
    return (0);
  i = 0;
  while (s1[i] != '\0')
  {
    newstr[i] = s1[i];
    i++;
  }
  j = 0;
  while (s2[j] != '\0')
  {
    newstr[i] = s2[j];
    j++;
    i++;
  }
  newstr[i] = '\0';
  return (newstr);
}