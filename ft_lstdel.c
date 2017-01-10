/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 12:16:42 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/03 12:16:44 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Takes a link's pointer address and frees the memory of that link
**  and every successor using del and free
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *link;
	t_list *next_link;

	link = *alst;
	if (link && del)
	{
		while (link)
		{
			next_link = link->next;
			del(link->content, link->content_size);
			free(link);
			link = next_link;
		}
		*alst = NULL;
	}
}
