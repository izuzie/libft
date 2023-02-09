#include "libft.h"

t_list    *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list    *i;
    t_list    *j;

    i = NULL;
    while (lst)
    {
        j = ft_lstnew((*f)(lst->content));
        if (!j)
        {
            ft_lstclear(&i, del);
            return (NULL);
        }
        ft_lstadd_back(&i, j);
        j = j->next;
        lst = lst->next;
    }
    return (i);
}