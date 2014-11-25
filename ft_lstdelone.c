/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 14:58:20 by aramanan          #+#    #+#             */
/*   Updated: 2014/11/12 14:55:50 by aramanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (alst == NULL && *alst == NULL)
		return ;
	if ((*alst)->content)
		(*del)((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
