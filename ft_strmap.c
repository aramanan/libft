/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 02:47:24 by aramanan          #+#    #+#             */
/*   Updated: 2014/11/12 13:31:25 by aramanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*strnew;
	int		i;

	if (s == NULL || f == NULL)
		return (NULL);
	strnew = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	i = 0;
	while (s[i] != '\0')
	{
		strnew[i] = (*f)(s[i]);
		i++;
	}
	strnew[i] = '\0';
	return (strnew);
}
