/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 14:54:34 by ibouabda          #+#    #+#             */
/*   Updated: 2018/07/07 19:45:14 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void 	ft_putchar(char c);
void	ft_div_mod(int a,int b,int *div, int *mod);
int main(void)
{
	int a;
	int b;
	int m;
	int d;
	
	a = 42;
	b = 5;
	ft_div_mod(a,b,&d,&m);
	printf("%i\n",d);
	printf("%i\n",m);
	return (0);
}
