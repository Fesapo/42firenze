/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 16:29:33 by fesapori          #+#    #+#             */
/*   Updated: 2026/08/06 16:31:43 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*cpy;

	i = 0;
	if (!src)
		return (NULL);
	while (src[i] != '\0')
		i++;
	cpy = (char *)malloc(i + 1);
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		cpy[i] = src[i];
		i++;
	}
	return (cpy);
}
/*
#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac != 2)
		printf("error!");
	else
	{
		printf("%s\n", av[1]);
		char *cmp = ft_strdup(av[1]);
		printf("%s\n", cmp);
		free(cmp);
	}
}
*/
