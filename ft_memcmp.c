/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-dieu <rde-dieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 15:17:47 by rde-dieu          #+#    #+#             */
/*   Updated: 2016/12/06 16:28:48 by rde-dieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char*)s1)[i] != ((unsigned char*)s2)[i])
			return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
		i++;
	}
	return (0);
}
