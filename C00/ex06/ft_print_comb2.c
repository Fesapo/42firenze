/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 18:56:47 by fesapori          #+#    #+#             */
/*   Updated: 2026/07/16 19:08:24 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_pair(int first, int second)
{
	ft_putchar((first / 10) + '0');
	ft_putchar((first % 10) + '0');
	ft_putchar(' ');
	ft_putchar((second / 10) + '0');
	ft_putchar((second % 10) + '0');
}

void	ft_print_comb2(void)
{
	char	first;
	char	second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_pair(first, second);
			if (!(first == 98 && second == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			second++;
		}
		first++;
	}
}

/*int main()
{
        ft_print_comb2();
}*/
