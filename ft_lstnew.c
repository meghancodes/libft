/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 12:17:21 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/03 12:17:22 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Allocates with malloc and returns a "fresh" link
*/

t_list*ft_lstnew(void const *content, size_t content_size)
{
	t_list *fresh;

	if (!(fresh = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (fresh)
	{
		if (!content)
		{
			fresh->content = NULL;
			fresh->content_size = 0;
		}
		else
		{
			if (!(fresh->content = malloc(content_size)))
				return (NULL);
			ft_memcpy(fresh->content, content, content_size);
			fresh->content_size = content_size;
		}
		fresh->next = NULL;
	}
	return (fresh);
}
