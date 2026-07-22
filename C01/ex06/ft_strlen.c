/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 18:50:07 by fesapori          #+#    #+#             */
/*   Updated: 2026/07/19 19:24:21 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != 0)
	{
		str++;
		i++;
	}
	return (i);
}
/*
int	main()
{
	char	str[] = "Hello World!";
	int lenght;
	printf("La mia stringa e' lunga %d caratteri\n", lenght = ft_strlen(str));
	return 0;
}*/
