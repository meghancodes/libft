/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 20:09:17 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/10 13:49:45 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Copies n bytes from src to dst -- overlap allowed
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst2;
	unsigned const char	*src2;
	size_t				index;

	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	index = len;
	if (!len)
		return (dst);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	while (index--)
		dst2[index] = src2[index];
	return ((void *)dst2);
}
