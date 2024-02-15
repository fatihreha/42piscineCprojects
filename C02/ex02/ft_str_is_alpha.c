/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdisci <fatihr2003@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:58:23 by fdisci            #+#    #+#             */
/*   Updated: 2024/02/07 16:11:02 by fdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	iss_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!iss_alpha(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
    char str1[] = "HelloWorld";
    char str2[] = "Hello, World!";

    printf("ft_str_is_alpha(\"%s\") = %d\n", str1, ft_str_is_alpha(str1));
    printf("ft_str_is_alpha(\"%s\") = %d\n", str2, ft_str_is_alpha(str2));

    return 0;
}
