/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 23:11:39 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/06 19:48:46 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Applies the function f to each character of the string
**  and creates a "fresh" string
*/

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;
	int		index;

	fresh = NULL;
	index = 0;
	if (s)
	{
		if (!(fresh = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
			return (NULL);
		while (s[index])
		{
			fresh[index] = f(s[index]);
			index++;
		}
		fresh[index] = '\0';
	}
	return (fresh);
}
