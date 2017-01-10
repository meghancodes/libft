/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 12:17:14 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/03 12:17:15 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Iterates a list and applies the function "f" to each link
**  to create a "fresh" list
*/

t_list*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *fresh;
	t_list *tmp;

	if (!lst || !f)
		return (NULL);
	tmp = f(lst);
	fresh = tmp;
	while (lst->next)
	{
		lst = lst->next;
		tmp->next = f(lst);
		if (tmp->next == NULL)
			return (NULL);
		tmp = tmp->next;
	}
	return (fresh);
}
