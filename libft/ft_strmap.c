/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 11:26:11 by cmatshiy          #+#    #+#             */
/*   Updated: 2018/06/09 13:21:54 by cmatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *out;
	char *one;

	if (f && s)
	{
		one = ft_strnew(ft_strlen(s));
		if (!one)
			return (NULL);
		out = one;
		while (*s != 0)
		{
			*out++ = f(*s++);
		}
		return (one);
	}
	return (NULL);
}
