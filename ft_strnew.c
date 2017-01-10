/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwilliam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 12:17:44 by mwilliam          #+#    #+#             */
/*   Updated: 2016/12/03 12:17:46 by mwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Allocates with malloc and returns a "fresh" string ending with '\0'
**  Each character is initialized at '\0'
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*fresh;

	if (!(fresh = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ft_bzero(fresh, size + 1);
	return (fresh);
}
