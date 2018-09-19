/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 09:28:06 by cmatshiy          #+#    #+#             */
/*   Updated: 2018/06/08 13:04:40 by cmatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *dest;
	char *some;

	dest = malloc(size);
	some = dest;
	if (dest)
	{
		while (size != 0)
		{
			*some++ = 0;
			size--;
		}
		return (dest);
	}
	else
	{
		return (NULL);
	}
}
