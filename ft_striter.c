/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 10:29:32 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/10 13:50:07 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Applies the function f to each character of s
*/

void	ft_striter(char *s, void (*f)(char *))
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
			f(str + index);
			index++;
		}
	}
}
