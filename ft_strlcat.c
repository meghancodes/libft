/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:13:48 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/10 13:20:25 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Copies and appends the NULL-terminated string src to dst
**  and returns the total length of the string
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*dst2;
	char	*src2;
	size_t	dst_len;

	dst2 = dst;
	src2 = (char *)src;
	while (*dst2 && size)
	{
		dst2++;
		size--;
	}
	dst_len = dst2 - dst;
	if (size == 0)
		return (dst_len + ft_strlen(src));
	while (*src2)
	{
		if (size > 1)
		{
			*dst2++ = *src2;
			size--;
		}
		src2++;
	}
	*dst2 = '\0';
	return (dst_len + (src2 - src));
}
