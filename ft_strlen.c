/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 12:17:36 by mwilliam          #+#    #+#             */
/*   Updated: 2017/01/10 11:17:44 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Determines the length of string s
*/

size_t	ft_strlen(const char *s)
{
	size_t index;

	index = 0;
	while (s[index] != '\0')
	{
		index++;
	}
	return (index);
}
