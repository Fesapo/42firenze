/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 16:06:37 by fesapori          #+#    #+#             */
/*   Updated: 2026/08/05 17:36:39 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = nb - 1;
	if (nb < 0 || nb == 0 || nb == 1)
		return (0);
	while (i > 1)
	{
		if ((nb % i) == 0)
			return (0);
		i--;
	}
	return (1);
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
		int res = ft_is_prime(nb);
		printf("%d\n", res);
	}
}
*/
