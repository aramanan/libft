/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 05:18:08 by aramanan          #+#    #+#             */
/*   Updated: 2014/11/19 22:08:58 by aramanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	int	result;

	if (!s1 || !s2)
		return (0);
	result = (ft_strncmp(s1, s2, n) == 0 ? 1 : 0);
	return (result);
}
