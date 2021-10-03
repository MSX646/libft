#include "libft.h"

void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
  if (lst != NULL)
  {
    if (del != NULL && lst->next != NULL)
      (del)(lst->content);
    free(lst);
    lst = NULL;
  }
}
