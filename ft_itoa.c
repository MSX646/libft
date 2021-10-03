#include "libft.h"

char    *ft_itoa(int n)
{
  char  *str;
  char  *t;
  char  *u;

  str = (char *)malloc(16);
  if (str == NULL)
    return (NULL);
  t = str;
  if (n < 0)
    *t++ = '-';
  if (n > 0)
    n = -n;
  if (n <= -10)
  {
    u = ft_itoa(-(n / 10));
    while (*u)
      *t++ = *u++;
  }
  *t = '0' - n % 10;
  *(t + 1) = '\0';
  return (str);
}
