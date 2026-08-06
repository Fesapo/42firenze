/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 17:46:15 by fesapori          #+#    #+#             */
/*   Updated: 2026/08/05 17:59:52 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 0 || nb == 0 || nb == 1)
		return (2);
	while (1)
	{
		while (i > 1 && (nb % i) != 0)
			i--;
		if (i == 1)
			return (nb);
		nb++;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int ac, char **av)
{
	if (ac != 2)
		printf("variabili sbagliate");
	else
	{
		int nb = atoi(av[1]);
		int res = ft_find_next_prime(nb);
		printf("%d\n", res);
	}
}
*/
