/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 05:45:57 by aramanan          #+#    #+#             */
/*   Updated: 2014/11/12 13:32:23 by aramanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char	*strnew;
	size_t	i;

	if (!s || !len)
		return (NULL);
	strnew = (char *)malloc(sizeof(char) * (len + 1));
	if (strnew == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		strnew[i] = s[start + i];
		i++;
	}
	strnew[i] = '\0';
	return (strnew);
}
