/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:32:42 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/02 21:06:11 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Copies n bytes from src to dst, stopping when c is found
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dst2;
	unsigned const char *src2;
	unsigned char		d;
	size_t				index;

	dst2 = (unsigned char *)dst;
	src2 = (unsigned const char *)src;
	d = c + '\0';
	index = 0;
	while (n > 0)
	{
		dst2[index] = src2[index];
		if (src2[index] == d)
			return (dst2 + (index + 1));
		n--;
		index++;
	}
	return (NULL);
}
