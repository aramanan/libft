/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 21:12:31 by aramanan          #+#    #+#             */
/*   Updated: 2014/11/09 01:35:56 by aramanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char				*pdst;
	const		char	*psrc;
	size_t				i;

	pdst = dst;
	psrc = src;
	if (src > dst)
	{
		i = 0;
		while (i < len)
		{
			pdst[i] = psrc[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i != 0)
		{
			pdst[i - 1] = psrc[i - 1];
			i--;
		}
	}
	return (dst);
}
