/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 20:49:56 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/02 21:16:47 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Allocates with malloc and returns a "fresh" string ending with '\0'
**  The "fresh" string is the result of concatenation of s1 and s2
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	int		index;
	int		index_2;

	index = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!(fresh = (char *)malloc(sizeof(char) * ((ft_strlen(s1)
							+ ft_strlen(s2)) + 1))))
		return (NULL);
	while (s1[index])
	{
		fresh[index] = s1[index];
		index++;
	}
	index_2 = 0;
	while (s2[index_2])
	{
		fresh[index] = s2[index_2];
		index_2++;
		index++;
	}
	fresh[index] = '\0';
	return (fresh);
}
