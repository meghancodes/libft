/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 10:23:18 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/09 11:46:28 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Compares n bytes of s1 and s2
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	while (s1[index] && s2[index] && (s1[index] == s2[index]) && index < n)
	{
		index++;
	}
	if (index == n)
		return (0);
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
