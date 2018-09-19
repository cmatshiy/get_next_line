/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 15:13:26 by cmatshiy          #+#    #+#             */
/*   Updated: 2018/06/08 14:56:28 by cmatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *start;
	char *stop;

	if (s1 && s2)
	{
		start = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (start)
		{
			stop = start;
			while (*s1 != 0)
				*start++ = *s1++;
			while (*s2 != 0)
				*start++ = *s2++;
			return (stop);
		}
		else
		{
			return (NULL);
		}
	}
	else
		return (NULL);
}
