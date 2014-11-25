/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 06:11:53 by aramanan          #+#    #+#             */
/*   Updated: 2014/11/12 13:31:03 by aramanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*strnew;
	int		i;
	int		j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	strnew = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (strnew)
	{
		i = 0;
		while (s1[i] != '\0')
		{
			strnew[i] = s1[i];
			i++;
		}
		j = 0;
		while (s2[j] != '\0')
		{
			strnew[i + j] = s2[j];
			j++;
		}
		strnew[i + j] = '\0';
		return (strnew);
	}
	return (NULL);
}
