/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 12:54:35 by kgalstya          #+#    #+#             */
/*   Updated: 2024/02/12 15:55:42 by kgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*head;

	if (!lst)
		return ;
	if (*lst && del)
	{
		head = *lst;
		while (head)
		{
			(*del)(head->content);
			head = (head)->next;
			free (*lst);
			*lst = head;
		}
		lst = NULL;
	}
}
