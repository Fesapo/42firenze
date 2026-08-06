/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 13:44:42 by fesapori          #+#    #+#             */
/*   Updated: 2026/07/29 13:46:26 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <bsd/string.h>   

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	length;
	int	i;

	length = 0;
	i = 0;
	while (src[i] != '\0')
	{
		i++;
		length++;
	}
	i = 0;
	if (src[i] != '\0')
	{
		while (src[i] != '\0' && size > 1)
		{
			dest[i] = src[i];
			i++;
			size--;
		}
	}
	*dest = '\0';
	return (length);
}
/*
int	main()
{
	char	*src = "Hello World";
	char	dest[100];
	int	n = 3;
	printf("%s\n", src);
	int 	res = ft_strlcpy(dest, src, n);
	printf("%d\n", res);
	size_t	result = strlcpy(dest, src, sizeof(dest));
	printf("%zu bytes\n", result);
}
*/
