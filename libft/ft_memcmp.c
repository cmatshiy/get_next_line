/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 16:12:32 by cmatshiy          #+#    #+#             */
/*   Updated: 2018/06/08 14:30:33 by cmatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*str1t;
	unsigned char	*str2t;

	i = 0;
	str1t = (unsigned char *)str1;
	str2t = (unsigned char *)str2;
	while (i < n)
	{
		if (str1t[i] != str2t[i])
			return (str1t[i] - str2t[i]);
		i++;
	}
	return (0);
}
