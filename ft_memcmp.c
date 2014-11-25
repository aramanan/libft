/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 02:29:35 by aramanan          #+#    #+#             */
/*   Updated: 2014/11/09 02:42:50 by aramanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const	char	*ps1;
	const	char	*ps2;
	size_t			i;

	if (n != 0)
	{
		ps1 = s1;
		ps2 = s2;
		i = 0;
		while (i < n)
		{
			if ((unsigned char)ps1[i] != (unsigned char)ps2[i])
				return ((unsigned char)ps1[i] - (unsigned char)ps2[i]);
			i++;
		}
	}
	return (0);
}
