/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 21:00:48 by aramanan          #+#    #+#             */
/*   Updated: 2014/11/19 23:39:44 by aramanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
			return ((*(unsigned char *)s1 > *(unsigned char *)s2) ? 1 : -1);
		else if (*s1 == '\0')
			return (0);
		else if (*s2 == '\0')
			return (0);
		n--;
		s1++;
		s2++;
	}
	return (0);
}
