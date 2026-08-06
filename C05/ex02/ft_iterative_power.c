/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:40:24 by fesapori          #+#    #+#             */
/*   Updated: 2026/08/04 16:36:29 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power >= 1)
	{
		num *= nb;
		power--;
	}
	return (num);
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
		int res = ft_iterative_power(nb, power);
		printf("%d\n", res);
	}
}
*/
