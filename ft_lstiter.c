/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 12:17:06 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/03 12:17:07 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Iterates the list 1st and applies the function f to each link
*/

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *link;
	t_list *next_link;

	link = lst;
	if (link && f)
	{
		while (link)
		{
			next_link = link->next;
			f(link);
			link = next_link;
		}
	}
}
