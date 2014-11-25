/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 01:06:24 by aramanan          #+#    #+#             */
/*   Updated: 2014/11/11 07:20:49 by aramanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	unsigned	int	ft_sizenstep(int n, unsigned int *size)
{
	unsigned	int	tmp;
	unsigned	int	step;

	step = 1;
	tmp = n;
	if (n < 0)
		tmp = -n;
	while (tmp >= 10)
	{
		tmp /= 10;
		*size = *size + 1;
		step *= 10;
	}
	return (step);
}

static	char			*ft_buildstrint(char *str, unsigned int step,
		unsigned int n, unsigned int i)
{
	while (step >= 1)
	{
		str[i++] = (n / step) + 48;
		n = n % step;
		step /= 10;
	}
	str[i] = '\0';
	return (str);
}

char					*ft_itoa(int n)
{
	unsigned	int	tab[4];
	char			*strint;

	tab[3] = (unsigned int)n;
	tab[0] = 0;
	if (n <= 0)
	{
		tab[3] = -n;
		tab[0] = 1;
	}
	tab[2] = ft_sizenstep(n, &tab[0]);
	strint = ft_strnew(tab[0]);
	tab[1] = 0;
	if (n < 0)
	{
		strint[tab[1]] = 45;
		tab[1]++;
	}
	return (ft_buildstrint(strint, tab[2], tab[3], tab[1]));
}
