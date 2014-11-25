/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 21:04:08 by aramanan          #+#    #+#             */
/*   Updated: 2014/11/08 21:04:43 by aramanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		nb;

	i = 0;
	while ((str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ') && str[i])
		i++;
	sign = 0;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+')
		sign = 1;
	if (sign != 0)
		i++;
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	if (sign == -1)
		nb = nb * sign;
	return (nb);
}
