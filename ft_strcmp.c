/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 11:27:12 by aramanan          #+#    #+#             */
/*   Updated: 2014/11/19 16:47:05 by aramanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *tmps1;
	unsigned char *tmps2;

	tmps1 = (unsigned char *)s1;
	tmps2 = (unsigned char *)s2;
	while (*tmps1 != '\0' || *tmps2 != '\0')
	{
		if (*tmps1 != *tmps2)
			return (*tmps1 - *tmps2);
		tmps1++;
		tmps2++;
	}
	return (0);
}
