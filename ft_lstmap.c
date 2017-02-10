/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-dieu <rde-dieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/21 15:03:31 by rde-dieu          #+#    #+#             */
/*   Updated: 2016/12/21 17:51:03 by rde-dieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;
	t_list *sav;
	t_list *sav2;

	if (lst == NULL || f == NULL)
		return (NULL);
	sav2 = f(lst);
	if ((list = ft_lstnew(sav2->content, sav2->content_size)))
	{
		sav = list;
		lst = lst->next;
		while (lst)
		{
			sav2 = f(lst);
			if (!(sav->next = ft_lstnew(sav2->content, sav2->content_size)))
				return (NULL);
			sav = sav->next;
			lst = lst->next;
		}
	}
	return (list);
}
