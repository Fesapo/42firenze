/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 18:01:46 by fesapori          #+#    #+#             */
/*   Updated: 2026/08/06 18:12:57 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc((size * 4) + 1);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac != 3)
		printf("error!");
	else
	{
		printf("%s %s\n", av[1], av[2]);
		int *str;
		int range = ft_ultimate_range(&str, atoi(av[1]), atoi(av[2]));
		printf("%d\n", range);
	}
}
*/
