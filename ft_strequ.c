/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 03:26:48 by aramanan          #+#    #+#             */
/*   Updated: 2014/11/19 19:45:32 by aramanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(const char *s1, const char *s2)
{
	int	i;

	if (!s1 && !s2)
		return (1);
	if (s1 == NULL || s2 == NULL)
		return (0);
	i = ft_strcmp(s1, s2);
	if (i == 0)
		return (1);
	else
		return (0);
}
