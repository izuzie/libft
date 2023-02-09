#include "libft.h"

char  *ft_substr(char const *s, unsigned int start, size_t len)
{
  char  *substr;
  size_t i;

  if (!s)
    return (NULL);
  if (ft_strlen(s) < start)
    return (ft_strdup(""));
  i = ft_strlen(s);
  if (start + len > i)
    len = i - start;
  substr = (char *)malloc(sizeof(char) * (len + 1));
  if (!substr)
    return (NULL);
  ft_strlcpy(substr, s + start, len + 1);
  return (substr);
}