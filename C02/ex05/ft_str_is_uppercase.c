/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 15:09:12 by fesapori          #+#    #+#             */
/*   Updated: 2026/07/21 15:20:35 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str != 0)
	{
		if (*str >= 'A' && *str <= 'Z')
			str++;
		else
			return (0);
	}
	return (1);
}

/*int	main()
{
	char	*src = "CIAO";
	printf("%s \n", src);
	int	res = ft_str_is_uppercase(src);
	printf("%d \n", res);
	char	*sre = "cIA0";
	printf("%s \n", sre);
	res = ft_str_is_uppercase(sre);
	printf("%d \n", res);
}
*/
