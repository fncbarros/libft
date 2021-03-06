#include "libft.h"
#include <stdio.h>

void	del(void *p)
{
	ft_bzero(p, 1);	
}

int main()
{
	t_list *head = ft_lstnew("1");
	t_list *tmp = ft_lstnew("2");
	ft_lstadd_front(&head, tmp);
	ft_lstdelone(tmp, del);
	free(head);
	free(tmp);
}
