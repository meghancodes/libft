/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 18:36:08 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/02 21:00:57 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Allocates with malloc and returns a "fresh" memory area
*/

void	*ft_memalloc(size_t size)
{
	void	*fresh;

	if (!(fresh = malloc(size)))
		return (NULL);
	ft_bzero(fresh, size);
	return (fresh);
}
