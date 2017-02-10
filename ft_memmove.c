/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-dieu <rde-dieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 18:21:57 by rde-dieu          #+#    #+#             */
/*   Updated: 2016/12/21 18:02:10 by rde-dieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void		*ret;

	ret = dst;
	if (dst < src)
		while (0 < len--)
			*(char *)dst++ = *(char *)src++;
	else
		while (len-- > 0)
			((char *)dst)[len] = ((char *)src)[len];
	return (ret);
}
