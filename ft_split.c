#include "libft.h"

static int wordcount(char const *s, char c)
{
  int i;
  int word;

  i = 0;
  word = 0;
  while (s && s[i])
  {
    if (s[i] != c)
    {
      word++;
      while (s[i] != c && s[i])
        i++;
    }
    else
      i++;
  }
  return (word);
}

static int wordsize(char const *s, char c, int i)
{
  int size;

  size = 0;
  while (s[i] != c && s[i])
  {
    size++;
    i++;
  }
  return (size);
}

static void ft_free(char **strs, int j)
{
  while (j-- > 0)
    free(strs[j]);
  free(strs);
}

char    **ft_split(char const *s, char c)
{
  int   i;
  int   j;
  char  **strs;

  i = 0;
  j = -1;
  strs = (char **)malloc((wordcount(s, c) + 1) * sizeof(char *));
  if (!strs)
    return (NULL);
  while (++j < wordcount(s, c))
  {
    while (s[i] == c)
      i++;
    strs[j] = ft_substr(s, i, wordsize(s, c, i));
    if (!strs)
    {
      ft_free(strs, j);
      return (NULL);
    }
    i += wordsize(s, c, i);
  }
  strs[j] = 0;
  return (strs);
}