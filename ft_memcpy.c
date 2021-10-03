#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
  unsigned char *a;
  const char *b;
  size_t           i;

  i = 0;
  a = dest;
  b = src;
  while (n > i)
  {
    a[i] = b[i];
    i++;
  }
  return (dest);
}
