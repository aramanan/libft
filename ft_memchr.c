/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 01:36:05 by aramanan          #+#    #+#             */
/*   Updated: 2014/11/12 15:32:08 by aramanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned	char	*pstr;
	unsigned	char	i;

	if (s != NULL && n != 0)
	{
		pstr = (unsigned char*)s;
		i = 0;
		while (i < n)
		{
			if ((unsigned char)c == pstr[i])
				return ((void*)(pstr + i));
			i++;
		}
	}
	return (NULL);
}
