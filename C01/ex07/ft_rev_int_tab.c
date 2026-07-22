/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 19:26:17 by fesapori          #+#    #+#             */
/*   Updated: 2026/07/20 15:57:17 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	c;
	int	n;

	i = 0;
	n = size -1;
	while (i < (size / 2))
	{
		c = tab[n];
		tab[n] = tab[i];
		tab[i] = c;
		n--;
		i++;
	}
}
/*
int	main()
{
	int	size = 5;
	int	tab[5] = {2, 4, 9, 1, 5};
	ft_rev_int_tab(tab, size);
	for (int i = 0; i < size; i++)
   		printf("%d ", tab[i]);
}
*/
