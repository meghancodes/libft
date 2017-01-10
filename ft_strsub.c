/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 18:44:08 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/06 19:47:45 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Allocates with malloc and returns a "fresh" substring from s
**  The substring begins at index start and is of size len
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*fresh;
	size_t	index;

	fresh = NULL;
	index = 0;
	if (s)
	{
		if (!(fresh = (char *)malloc(sizeof(char) * len + 1)))
			return (NULL);
		while (s[start] && index < len)
		{
			fresh[index] = s[start];
			start++;
			index++;
		}
		fresh[index] = '\0';
	}
	return (fresh);
}
