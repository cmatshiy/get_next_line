/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 14:51:28 by cmatshiy          #+#    #+#             */
/*   Updated: 2018/06/08 13:50:24 by cmatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*one;
	char		*str;
	char const	*ptr;

	if (s)
	{
		str = ft_strnew(len);
		one = str;
		ptr = &s[start];
		if (str)
		{
			while (*ptr != 0 && len > 0)
			{
				*str++ = *ptr++;
				len--;
			}
			return (one);
		}
		else
		{
			return (NULL);
		}
	}
	else
		return (NULL);
}
