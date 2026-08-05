/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 17:22:11 by fesapori          #+#    #+#             */
/*   Updated: 2026/07/27 17:23:00 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (dest[length] != '\0')
		length++;
	while (src[i] != '\0')
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int 	main(int argc, char *argv[])
{
	if(argc != 3)
		printf("non ha detto niente");
	else
	{	
		printf("%s\n%s\n", argv[1], argv[2]);
		char	*str = ft_strcat(argv[1], argv[2]);
		printf("%s\n", str);
	}
	return 0;
}
*/
