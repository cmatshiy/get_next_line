/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmatshiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 15:31:32 by cmatshiy          #+#    #+#             */
/*   Updated: 2018/06/12 18:03:09 by cmatshiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int				bek;
	int				end;
	char			*str;
	char			*out;

	if (s == NULL)
		return (NULL);
	bek = 0;
	end = ft_strlen(s) - 1;
	while ((s[bek] == ' ' || s[bek] == '\n' || s[bek] == '\t') && (s[bek] != 0))
		bek++;
	while ((s[end] == ' ' || s[end] == '\n' || s[end] == '\t') && (s[end] != 0))
		end--;
	if (bek >= end)
		return (ft_strdup(""));
	str = ft_strnew(end - bek + 1);
	if (str)
	{
		out = str;
		while (s[bek] != 0 && bek <= end)
			*str++ = s[bek++];
		return (out);
	}
	else
		return (NULL);
}
