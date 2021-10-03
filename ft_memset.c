#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
  unsigned char *dest;

  dest = s;
  while (n > 0)
  {
    *dest = c;
    dest++;
    n--;
  }
  return (s);
}
