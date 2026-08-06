/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 15:27:01 by fesapori          #+#    #+#             */
/*   Updated: 2026/08/03 15:37:07 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (*base == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	lenb;

	lenb = check_base(base);
	if (lenb != 0)
	{
		if (nbr == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr = -nbr;
		}
		if (nbr >= lenb)
			ft_putnbr_base(nbr / lenb, base);
		write(1, &base[nbr % lenb], 1);
	}
}
/*
#include <stdio.h>
#include <stdlib.h>
int 	main(int argc, char *argv[])
{
	if(argc != 3)
		printf("Give the variables!!\n");
	else
	{	
		int	n = atoi(argv[1]);
		ft_putnbr_base(n, argv[2]);
		printf("\n");
		
	}
	return 0;
}
*/
