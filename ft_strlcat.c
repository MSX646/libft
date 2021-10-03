#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t n)
{
  size_t    i;
  size_t    j;
  size_t    dlen;
  size_t    slen;

  i = 0;
  dlen = ft_strlen(dst);
  slen = ft_strlen(src);
  j = dlen;
  if (dlen < n - 1 && n > 0)
  {
    while (src[i] && dlen + i < n - 1)
    {
      dst[j] = src[i];
      j++;
      i++;
    }
    dst[j] = '\0';
  }
  if (dlen >= n)
    dlen = n;
  return (dlen + slen);
}
