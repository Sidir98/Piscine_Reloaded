/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 18:31:23 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/07 16:31:46 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;
	int k;

	if (min >= max)
	{
		return (NULL);
	}
	if (!(tab = (int *)malloc(sizeof(int) * ((max - min)))))
		return (NULL);
	i = min;
	k = 0;
	while (i <= max)
	{
		tab[k] = i++;
		k++;
	}
	return (tab);
}
