/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 18:37:03 by fesapori          #+#    #+#             */
/*   Updated: 2026/07/27 18:37:56 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = 0;
	while (*dest++ != '\0')
		length++;
	while (i < nb)
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
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
		char	*result = ft_strncat(argv[1], argv[2], n);
		printf("%s\n", result);
	}
	return 0;
}
*/
