#include "libft.h"

int ft_atoi(const char *str)
{
  int   res;
  int   sign;

  sign = 1;
  res = 0;
  while(*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
      || *str == '\f' || *str == '\r')
    str++;
  if (*str == '-' || *str == '+')
  {
    if (*str == '-')
      sign *= -1;
    str++;
  }
  while (*str >= '0' && *str <= '9')
  {
    res *= 10;
    res += *str - '0';
    str++;
  }
  return (res * sign);
}
