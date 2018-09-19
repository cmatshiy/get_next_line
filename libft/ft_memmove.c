/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 15:58:33 by cmatshiy          #+#    #+#             */
/*   Updated: 2018/06/08 11:08:27 by cmatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *i;
	char *j;

	i = (char*)src;
	j = (char*)dst;
	if (i < j)
		while (len--)
		{
			j[len] = i[len];
		}
	else
		ft_memcpy(j, i, len);
	return (dst);
}
