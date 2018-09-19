/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 13:45:55 by cmatshiy          #+#    #+#             */
/*   Updated: 2018/06/08 11:00:37 by cmatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *i;
	unsigned char *j;

	i = (unsigned char*)src;
	j = (unsigned char*)dst;
	while (n-- > 0)
	{
		*j = *i;
		if (*i == (unsigned char)c)
			return ((void*)j + 1);
		i++;
		j++;
	}
	return (NULL);
}
