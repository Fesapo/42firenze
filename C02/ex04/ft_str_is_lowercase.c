/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 15:02:51 by fesapori          #+#    #+#             */
/*   Updated: 2026/07/21 15:20:06 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != 0)
	{
		if (*str >= 'a' && *str <= 'z')
			str++;
		else
			return (0);
	}
	return (1);
}
/*
int	main()
{
	char	*src = "ciao";
	printf("%s \n", src);
	int	res = ft_str_is_lowercase(src);
	printf("%d \n", res);
	char	*sre = "cIa0";
	printf("%s \n", sre);
	res = ft_str_is_lowercase(sre);
	printf("%d \n", res);
}
*/
