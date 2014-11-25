/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 02:28:15 by aramanan          #+#    #+#             */
/*   Updated: 2014/11/12 13:32:08 by aramanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	int		ft_nbwords(const char *s, char c)
{
	int	words;
	int	i;
	int	length;

	i = 0;
	words = 0;
	length = ft_strlen(s);
	while (length && s[i] != '\0')
	{
		while (s[i] == c && s[i])
		{
			length--;
			i++;
		}
		if (s[i] == c || s[i])
		{
			words += 1;
			while (s[i] != c && s[i])
			{
				length--;
				i++;
			}
		}
	}
	return (words);
}

static	char	**ft_create(char **t, const char *s, char c, int *i)
{
	int	length;
	int start;

	while (s[i[0]] != '\0')
	{
		while (s[i[0]] == c && s[i[0]])
			i[0]++;
		start = i[0];
		while (s[i[0]] != c && s[i[0]])
			i[0]++;
		length = i[0] - start;
		if ((s[i[0]] || length > 0) || c == '\0')
		{
			t[i[1]] = ft_strsub(s, start, length);
			i[1]++;
		}
	}
	t[i[1]] = '\0';
	return (t);
}

char			**ft_strsplit(const char *s, char c)
{
	int					words;
	char				**tabstr;
	int					i[2];

	if (s != NULL)
		words = ft_nbwords(s, c);
	else
		words = 1;
	tabstr = (char **)malloc(sizeof(char *) * words + 1);
	if (tabstr == NULL)
		return (NULL);
	tabstr[words - 1] = '\0';
	if (words == 1)
		return (tabstr);
	i[0] = 0;
	i[1] = 0;
	return (ft_create(tabstr, s, c, i));
}
