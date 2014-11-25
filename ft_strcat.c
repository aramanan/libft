/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 19:12:32 by aramanan          #+#    #+#             */
/*   Updated: 2014/11/06 15:47:27 by aramanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	int	lengths1;
	int	lengths2;

	lengths1 = 0;
	lengths2 = 0;
	while (s1[lengths1])
		lengths1++;
	while (s2[lengths2])
	{
		s1[lengths1] = s2[lengths2];
		lengths2++;
		lengths1++;
	}
	s1[lengths1] = '\0';
	return (s1);
}
