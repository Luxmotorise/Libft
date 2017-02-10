/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-dieu <rde-dieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/22 16:46:03 by rde-dieu          #+#    #+#             */
/*   Updated: 2016/12/22 17:03:19 by rde-dieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int		ft_poww(unsigned int x, unsigned int y)
{
	unsigned int z;

	z = x;
	while (y > 1)
	{
		x = x * z;
		y--;
	}
	return (x);
}
