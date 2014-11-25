/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:44:02 by aramanan          #+#    #+#             */
/*   Updated: 2014/11/05 16:38:00 by aramanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char			*ft_strdup(const char *s1)
{
	char	*newstr;
	int		length;
	int		i;

	length = 0;
	i = 0;
	while (s1[length] != '\0')
		length++;
	newstr = (char*)malloc(sizeof(*s1) * (length + 1));
	while (i < length)
	{
		newstr[i] = s1[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
