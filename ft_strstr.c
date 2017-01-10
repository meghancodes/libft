/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 16:25:05 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/09 12:33:56 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Locates the first occurence of the string "little" in the string "big"
*/

char	*ft_strstr(const char *big, const char *little)
{
	const char	*big2;
	const char	*little2;

	if (*little == '\0')
		return ((char *)big);
	while (*big)
	{
		big2 = big;
		little2 = little;
		while (*big2 == *little2 && *big2)
		{
			big2++;
			little2++;
		}
		if (*little2 == '\0')
			return ((char *)big);
		big++;
	}
	return (NULL);
}
