/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdisci <fatihr2003@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:11:14 by fdisci            #+#    #+#             */
/*   Updated: 2024/02/07 16:13:29 by fdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	iss_num(char c)
{
	return ((c >= '0') && (c <= '9'));
}

int	ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!iss_num(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	char	str1[] = "123456";
	char	str2[] = "123abc";

	printf("ft_str_is_numeric(\"%s\") = %d\n", str1, ft_str_is_numeric(str1));
	printf("ft_str_is_numeric(\"%s\") = %d\n", str2, ft_str_is_numeric(str2));

	return (0);
}