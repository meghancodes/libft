/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:58:31 by mwilliam          #+#    #+#             */
/*   Updated: 2016/11/14 10:23:48 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Outputs the string s to the standard output
*/

void	ft_putstr(char const *s)
{
	char const	*str;
	int			index;

	index = 0;
	str = s;
	if (str)
	{
		while (str[index])
		{
			ft_putchar(str[index]);
			index++;
		}
	}
}
