/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-dieu <rde-dieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 16:13:09 by rde-dieu          #+#    #+#             */
/*   Updated: 2016/12/28 17:48:57 by rde-dieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	size_t	i;
	size_t	j;
	char	*s;

	if (!str)
		return (0);
	i = 0;
	j = ft_strlen(str);
	s = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (s == NULL)
		return (0);
	while (i <= ft_strlen(str))
	{
		s[i] = str[j];
		i++;
		j--;
	}
	s[i] = '\0';
	return (s);
}
