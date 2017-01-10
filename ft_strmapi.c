/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 10:14:23 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/06 19:48:23 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Applies the function f to each character of the string
**  passing its index as the first argument to create a "fresh" string
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fresh;
	unsigned int	index;

	fresh = NULL;
	index = 0;
	if (s)
	{
		if (!(fresh = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
			return (NULL);
		while (s[index])
		{
			fresh[index] = f(index, s[index]);
			index++;
		}
		fresh[index] = '\0';
	}
	return (fresh);
}
