/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 15:46:36 by mwilliam          #+#    #+#             */
/*   Updated: 2016/11/14 08:58:32 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Locates the last occurence of c in the string s
*/

char	*ft_strrchr(const char *s, int c)
{
	int		index;
	char	d;

	d = c + '\0';
	index = 0;
	while (s[index] != '\0')
		index++;
	while (index >= 0 && (s[index] != d))
		index--;
	if (s[index] != d)
		return (NULL);
	return ((char *)s + index);
}
