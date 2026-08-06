/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:47:54 by fesapori          #+#    #+#             */
/*   Updated: 2026/07/29 17:48:16 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1, str, 1);
		str++;
	}
}
/*
int	main(int ac, char **av)
{
	if(ac != 2)
		printf("quantitá sbagliata di variabile");
	else
	{
		char	*src = av[1];
		printf("%s \n", src);
		ft_putstr(src);
		printf("\n");
	}
}
*/
