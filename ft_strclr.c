/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 20:19:05 by mwilliam          #+#    #+#             */
/*   Updated: 2016/11/30 14:43:34 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Sets every character of s to '\0'
*/

void	ft_strclr(char *s)
{
	char *s1;

	s1 = s;
	if (s1)
	{
		while (*s1)
		{
			*s1 = '\0';
			s1++;
		}
	}
}
