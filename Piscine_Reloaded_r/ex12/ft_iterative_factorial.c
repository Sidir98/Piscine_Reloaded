/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 20:38:59 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/07 19:07:50 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int res;

	if (nb < 13)
	{
		res = nb;
		while (nb > 1)
		{
			nb--;
			res = res * nb;
		}
		if (nb == 1)
			return (res);
		else if (nb == 0)
			return (1);
		else
			return (0);
	}
	return (0);
}
