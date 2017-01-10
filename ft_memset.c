/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 12:17:27 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/03 12:17:29 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Writes len bytes of c to the string b
*/

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			index;
	unsigned char	*b2;
	unsigned char	c2;

	b2 = b;
	c2 = c;
	index = 0;
	while (index < len)
	{
		b2[index] = c2;
		index++;
	}
	return (b);
}
