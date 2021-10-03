#include "libft.h"

char    *ft_strdup(const char *s)
{
  char      *str;
  size_t    size;
  size_t    i;

  i = 0;
  size = 0;
  while (s[size])
    size++;
  str = (char *)malloc(sizeof(char) * size + 1);
  if (str == NULL)
    return (NULL);
  while (i < size)
  {
    str[i] = s[i];
    i++;
  }
  str[size] = '\0';
  return (str);
}
