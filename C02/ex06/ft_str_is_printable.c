/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 15:15:37 by fesapori          #+#    #+#             */
/*   Updated: 2026/07/21 15:20:48 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != 0)
	{
		if (*str >= 32 && *str <= 126)
			str++;
		else
			return (0);
	}
	return (1);
}
/*
int	main()
{
	char	*src = "C1:aO~";
	printf("%s \n", src);
	int	res = ft_str_is_printable(src);
	printf("%d \n", res);
	char	*sre = "cI1: a/";
	printf("%s \n", sre);
	res = ft_str_is_printable(sre);
	printf("%d \n", res);
}
*/
