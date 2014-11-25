/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 17:24:40 by aramanan          #+#    #+#             */
/*   Updated: 2014/11/05 16:57:55 by aramanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned	char	*pstr;
	size_t				i;

	pstr = b;
	i = 0;
	while (i < len)
	{
		pstr[i] = c;
		i++;
	}
	return (b);
}
