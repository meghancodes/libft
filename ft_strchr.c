/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 18:54:00 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/09 10:58:48 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Locates the first occurence of c in the string s
*/

char	*ft_strchr(const char *s, int c)
{
	int		index;
	int		count;
	char	d;

	d = c + '\0';
	index = 0;
	count = 0;
	while (s[index] != '\0')
		index++;
	while (count < index && (s[count] != d))
		count++;
	if (s[count] != d)
		return (NULL);
	return ((char *)s + count);
}
