/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramanan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 09:55:42 by aramanan          #+#    #+#             */
/*   Updated: 2014/11/11 16:30:39 by aramanan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*list;
	void	*contentdup;

	contentdup = (void *)ft_memalloc(content_size + 1);
	if (content == NULL)
	{
		contentdup = NULL;
		content_size = 0;
	}
	else
		contentdup = ft_memcpy(contentdup, content, content_size);
	list = (t_list *)ft_memalloc(sizeof(t_list));
	if (list != NULL)
	{
		list->content = contentdup;
		list->content_size = content_size;
		list->next = NULL;
	}
	return (list);
}
