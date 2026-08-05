/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 16:41:22 by fesapori          #+#    #+#             */
/*   Updated: 2026/07/28 16:42:08 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = 0;
	while (dest[length] != '\0')
		length++;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[length + i] = src[i];
		i++;
	}
	if (size != 0)
		dest[length + i] = '\0';
	return (length + i);
}
/*
#include <stdio.h>
#include <stdlib.h>
int 	main(int argc, char *argv[])
{
	if(argc != 4)
		printf("non ha detto niente");
	else
	{	
		printf("%s\n%s\n%s\n", argv[1], argv[2], argv[3]);
		int	n = atoi(argv[3]);
		int	res = ft_strlcat(argv[1], argv[2], n);
		printf("%d\n", res);
	}
	return 0;
}
*/
