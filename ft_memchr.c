/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 18:47:43 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/02 10:24:31 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Locates the first occurence of c in the string s
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*str;
	unsigned char		d;
	size_t				index;

	str = (unsigned const char *)s;
	d = c + '\0';
	index = 0;
	while (index < n)
	{
		if (str[index] == d)
			return ((void *)s + index);
		index++;
	}
	return (NULL);
}
