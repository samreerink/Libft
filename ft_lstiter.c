#include	"libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	temp = lst;
	while (lst != NULL)
	{
		temp = temp->next;
		f(lst->content);
		lst = temp;
	}
}
