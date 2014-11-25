/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 19:28:39 by aramanan          #+#    #+#             */
/*   Updated: 2014/11/19 20:20:13 by aramanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(const char *s)
{
	size_t		i;
	size_t		length;

	if (!s)
		return (NULL);
	i = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i])
		i++;
	if (i == ft_strlen(s) || ft_strlen(s) == 0)
		return (ft_strnew(1));
	length = ft_strlen(s) - 1;
	while (s[length] == ' ' || s[length] == '\t' || s[length] == '\n')
		length--;
	return (ft_strsub(s, i, length - i + 1));
}
