/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 17:38:36 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/06 18:09:38 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Applies the function f to each character of s,
**  passing its index as the first argument
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char	*str;
	int		index;

	index = 0;
	str = s;
	if (!str || !f)
		return ;
	if (str)
	{
		while (str[index])
		{
			f(index, str + index);
			index++;
		}
	}
}
