/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibouabda <ibouabda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 09:07:46 by ibouabda          #+#    #+#             */
/*   Updated: 2018/11/07 13:11:04 by ibouabda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int     main(void)
{
    char *s1 = "atoi";
    char *s2 = "ato";
    int result = ft_strcmp(s1, s2);
	int result2 = strcmp(s1, s2);
    printf("%i\n", result);
	printf("%i\n", result2);
    return (0);
}
