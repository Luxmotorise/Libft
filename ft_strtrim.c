/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-dieu <rde-dieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 17:29:01 by rde-dieu          #+#    #+#             */
/*   Updated: 2016/12/21 18:27:50 by rde-dieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (0);
	i = 0;
	j = ((int)ft_strlen(s) - 1);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (i != (int)ft_strlen(s))
		while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
			j--;
	if (!(str = (char *)malloc(sizeof(char) * (j - i + 2))))
		return (0);
	k = 0;
	while (i <= j)
	{
		str[k] = s[i];
		i++;
		k++;
	}
	str[k] = '\0';
	return (str);
}
