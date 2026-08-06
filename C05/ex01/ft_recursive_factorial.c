/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 15:14:28 by fesapori          #+#    #+#             */
/*   Updated: 2026/08/04 15:17:22 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;
	int	n;

	n = nb;
	num = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (ft_iterative_factorial(--nb) * n);
}

#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac != 2)
		printf("variabili sbagliate");
	else
	{
		int nb = atoi(av[1]);
		int res = ft_iterative_factorial(nb);
		printf("%d\n", res);
	}
}

