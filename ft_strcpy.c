/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 14:46:51 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/02 10:45:12 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Copies the NULL-terminated string src to dst
*/

char	*ft_strcpy(char *dst, const char *src)
{
	char	*dst2;
	int		index;

	index = 0;
	dst2 = dst;
	while (src[index])
	{
		dst2[index] = src[index];
		index++;
	}
	dst2[index] = '\0';
	return (dst);
}
