/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 18:59:57 by aramanan          #+#    #+#             */
/*   Updated: 2014/11/12 10:56:21 by aramanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*mem;
	char	*ptr;
	size_t	i;

	mem = (void*)malloc(sizeof(void) * size);
	if (mem == NULL)
		return (NULL);
	i = 0;
	ptr = (char*)mem;
	while (i < size)
	{
		ptr[i] = '\0';
		i++;
	}
	return (mem);
}
