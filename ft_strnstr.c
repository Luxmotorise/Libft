/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-dieu <rde-dieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 16:53:25 by rde-dieu          #+#    #+#             */
/*   Updated: 2016/12/21 18:32:37 by rde-dieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (ft_strlen(to_find) == 0)
		return ((char*)str);
	while (str[i] && i + ft_strlen(to_find) <= len)
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				return ((char*)str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
