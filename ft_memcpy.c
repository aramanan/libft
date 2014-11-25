/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opandolf <opandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:33:28 by opandolf          #+#    #+#             */
/*   Updated: 2014/11/11 11:26:19 by aramanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*s1;
	const char	*s2;

	if (dst && src)
	{
		s1 = dst;
		s2 = src;
		while (n != 0)
		{
			s1[n - 1] = s2[n - 1];
			n--;
		}
	}
	return (dst);
}
