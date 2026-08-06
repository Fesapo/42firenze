/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fesapori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 16:19:34 by fesapori          #+#    #+#             */
/*   Updated: 2026/07/22 16:37:13 by fesapori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	while (str[++i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			continue ;
		if (str[i - 1] >= '0' && str[i - 1] <= '9')
			continue ;
		if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
			continue ;
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
/*
int	main()
{
	char	src[] = "hi, how are you? 42words forty-two; fifty+and+one";
	printf("%s \n", src);
	ft_strcapitalize(src);
	printf("%s \n", src);
}
*/
