/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:04:18 by fesapori          #+#    #+#             */
/*   Updated: 2026/08/06 17:15:09 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	j;
	int	*range;

	if (min > max)
		return (NULL);
	range = (int *)malloc(((max - min) + 1) * 4);
	i = 0;
	j = min;
	while (j < max)
	{
		range[i] = j;
		j++;
		i++;
	}
	return (range);
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
		int *range = ft_range(atoi(av[1]), atoi(av[2]));
		int i = 0;
		while (range[i] != '\0') 
		{
		    printf("%d ", range[i]);
		    i++;
		}
		free(range);
	}
}
*/
