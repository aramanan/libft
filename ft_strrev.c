/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 05:09:07 by aramanan          #+#    #+#             */
/*   Updated: 2014/11/11 09:23:18 by aramanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		length;
	char	c;

	if (ft_strlen(str) > 1)
		length = ft_strlen(str) - 1;
	i = 0;
	while (i < length / 2)
	{
		c = str[i];
		str[i] = str[length - i];
		str[length - i] = c;
		i++;
	}
	return (str);
}
