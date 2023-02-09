#include "libft.h"

char  *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
  size_t h;
  size_t n;

  h = 0;
  n = 0;
  if (needle[0] == '\0')
    return ((char *)haystack);
  if (!len)
    return (0);
  while (haystack[h] != '\0' && h < len)
  {
    if (haystack[h] == needle[n])
    {
      while (haystack[h + n] == needle[n] && h + n < len)
      {
        if (needle[n + 1] == '\0')
          return ((char *)haystack + h);
        n++;
      }
      n = 0;
    }
    h++;
  }
  return (NULL);
}