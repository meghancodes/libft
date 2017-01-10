/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 10:46:56 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/02 10:47:02 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Copies len bytes of the NULL-terminated string src to dst
*/

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*dst2;
	size_t	index;

	index = 0;
	dst2 = dst;
	while (index < len && src[index])
	{
		dst2[index] = src[index];
		index++;
	}
	while (index < len)
	{
		dst2[index] = '\0';
		index++;
	}
	return (dst);
}
