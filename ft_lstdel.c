/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 11:02:28 by aramanan          #+#    #+#             */
/*   Updated: 2014/11/12 13:29:22 by aramanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	if (alst != NULL && *alst != NULL)
	{
		tmp = (*alst)->next;
		while (tmp != NULL)
		{
			if (tmp->content)
				(*del)(tmp->content, tmp->content_size);
			free(tmp);
			tmp = tmp->next;
		}
		ft_lstdelone(alst, del);
	}
}
