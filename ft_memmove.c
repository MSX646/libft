#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
  char  *d;
  const char  *s;

  d = dest;
  s = src;
  if (s < d)
  {
    s += n;
    d += n;
    while (n--)
      *--d = *--s;
  }
  else
  {
    while (n--)
      *d++ = *s++;
  }
  return (dest);
}
