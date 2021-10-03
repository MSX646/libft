#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  unsigned char *str1;
  unsigned char *str2;

  str1 = (unsigned char *)s1;
  str2 = (unsigned char *)s2;
  while (n-- > 0)
  {
    if (*str1++ != *str2++)
    {
      if (str1[-1] < str2[-1])
        return (-1);
      else
        return (1);
    }
  }
  return (0);
}
