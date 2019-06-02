/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmorulan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 14:16:39 by kmorulan          #+#    #+#             */
/*   Updated: 2019/06/02 15:43:06 by kmorulan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t dstlen;
	size_t space;
	size_t srclen;

	i = ft_strlen(dst);
	j = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	space = dstsize - dstlen - 1;
	if(dstsize > 0)
	{
		while(space && src[j])
		{
			dst[i] = src[j];
			i++;
			j++;
			space--;
		}
		dst[i] = '\0';
		return (i - 1);
	}
	else
	{
		return (srclen);
	}
}	
