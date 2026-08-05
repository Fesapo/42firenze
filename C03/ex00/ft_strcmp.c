/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 12:27:22 by fesapori          #+#    #+#             */
/*   Updated: 2026/07/27 17:34:55 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((char unsigned)*s1 - (char unsigned)*s2);
}
/*
#include <stdio.h>
int 	main(int argc, char *argv[])
{
	if(argc != 3)
		printf("non ha detto niente");
	else
	{	
		printf("%s\n%s\n", argv[1], argv[2]);
		int	fransisco = ft_strcmp(argv[1], argv[2]);
		printf("%d\n", fransisco);
	}
	return 0;
}
*/
