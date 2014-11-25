/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:14:02 by aramanan          #+#    #+#             */
/*   Updated: 2014/11/19 20:19:32 by aramanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(const char *src)
{
	size_t	nbchar;

	nbchar = 0;
	while (src[nbchar] != '\0')
	{
		nbchar++;
	}
	return (nbchar);
}
