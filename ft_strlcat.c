/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 21:00:35 by aramanan          #+#    #+#             */
/*   Updated: 2014/11/11 09:28:57 by aramanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	lendst;

	lendst = ft_strlen(dst);
	if (size <= (size_t)ft_strlen(dst))
		return (size + (size_t)ft_strlen(src));
	n = size - (size_t)ft_strlen(dst) - 1;
	dst = ft_strncat(dst, src, n);
	return (lendst + (size_t)ft_strlen(src));
}
