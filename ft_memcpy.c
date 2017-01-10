/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 19:41:43 by mwilliam          #+#    #+#             */
/*   Updated: 2016/11/14 10:22:54 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Copies n bytes from src to dst
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst2;
	unsigned const char	*src2;
	size_t				index;

	index = 0;
	dst2 = (unsigned char *)dst;
	src2 = (unsigned const char *)src;
	while (index < n)
	{
		dst2[index] = src2[index];
		index++;
	}
	return (dst);
}
