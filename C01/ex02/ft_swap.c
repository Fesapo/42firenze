/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:49:03 by fesapori          #+#    #+#             */
/*   Updated: 2026/07/19 19:15:46 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int main()
{
	int	n = 3;
	int     s = 6;
	printf("%d\n", n);
	printf("%d\n", s);
	ft_swap(&n, &s);
        printf("%d\n", n);
	printf("%d\n", s);
}
*/
