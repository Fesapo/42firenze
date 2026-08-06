/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 13:22:04 by fesapori          #+#    #+#             */
/*   Updated: 2026/08/05 13:28:01 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	else
		return(nb * ft_recursive_power(nb, power - 1));
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac != 3)
		printf("variabili sbagliate");
	else
	{
		int nb = atoi(av[1]);
		int power = atoi(av[2]);
		int res = ft_recursive_power(nb, power);
		printf("%d\n", res);
	}
}
*/
