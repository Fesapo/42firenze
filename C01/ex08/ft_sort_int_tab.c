/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 12:55:43 by fesapori          #+#    #+#             */
/*   Updated: 2026/07/20 17:17:22 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	p;
	int	c;

	i = 0;
	while (i < size)
	{
		p = i + 1;
		while (tab[p] != '\0')
		{
			if (tab[i] > tab[p])
			{
				c = tab[p];
				tab[p] = tab[i];
				tab[i] = c;
			}
			p++;
		}
		i++;
	}
}
/*
int	main()
{
	int	size = 9;
	int	tab[9] = {2, 4, 9, 1, 5, 10, 8, 3, 4};
	ft_sort_int_tab(tab, size);
	for (int i = 0; i < size; i++)
   		printf("%d ", tab[i]);
}
*/
