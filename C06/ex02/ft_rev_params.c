/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 12:28:18 by fesapori          #+#    #+#             */
/*   Updated: 2026/08/06 12:28:20 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *name)
{
	while (*name != '\0')
	{
		write(1, name, 1);
		name++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc != 1)
	{
		i = argc - 1;
		while (i > 0)
		{
			print(argv[i]);
			write(1, "\n", 1);
			i--;
		}
	}
}
