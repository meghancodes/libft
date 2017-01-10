/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 20:40:33 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/02 20:57:21 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**  Tests for ASCII characters --
**  any character between 0 and octal 0177 inclusive
*/

int	ft_isascii(int c)
{
	if (c >= 000 && c <= 0177)
		return (1);
	return (0);
}
