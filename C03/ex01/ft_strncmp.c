/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 16:50:47 by fesapori          #+#    #+#             */
/*   Updated: 2026/07/27 16:51:48 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' && s2[i] != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
			return ((char unsigned)s1[i] - (char unsigned)s2[i]);
		i++;
	}
	if (i == n)
		i--;
	return ((char unsigned)s1[i] - (char unsigned)s2[i]);
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
		int	result = ft_strncmp(argv[1], argv[2], n);
		printf("%d\n", result);
	}
	return 0;
}
*/
