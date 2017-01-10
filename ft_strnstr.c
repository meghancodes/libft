/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 17:21:35 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/09 12:33:53 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Locates the first occurence of the string "little" in the string "big"
**  but searches no more than len characters
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*big2;
	const char	*little2;
	size_t		n;

	if (*little == '\0')
		return ((char *)big);
	while (*big && len > 0)
	{
		if (*big == *little)
		{
			big2 = big;
			little2 = little;
			n = len;
			while (n-- && *big2 && *little2 && *big2 == *little2)
			{
				big2++;
				little2++;
			}
			if (*little2 == '\0')
				return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}
