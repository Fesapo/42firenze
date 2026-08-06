/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:40:48 by fesapori          #+#    #+#             */
/*   Updated: 2026/07/29 17:42:13 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int 	main(int argc, char *argv[])
{
	if(argc != 2)
		printf("non ha detto niente");
	else
	{	
		printf("%s\n", argv[1]);
		int	result = ft_strlen(argv[1]);
		printf("%d\n", result);
	}
	return 0;
}
*/
