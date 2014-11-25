/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 03:15:40 by aramanan          #+#    #+#             */
/*   Updated: 2014/11/12 13:31:40 by aramanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*strnew;
	int		i;

	if (s == NULL || f == NULL)
		return (NULL);
	strnew = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	i = 0;
	while (s[i] != '\0')
	{
		strnew[i] = (*f)(i, s[i]);
		i++;
	}
	strnew[i] = '\0';
	return (strnew);
}
