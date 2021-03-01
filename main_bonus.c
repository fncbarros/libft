#include "libft.h"
#include <stdio.h>

int main()
{
	char *s = "first";
	t_list *head = ft_lstnew(s);
	printf("%s\n", (char *)head->content);
	s = "second";
	t_list *new;
	new->content = (void *)s;
	ft_lstadd_front(head, new);
	printf("%s\n", (char *)new->content);
	//free(t_list);
	return 0;
}
