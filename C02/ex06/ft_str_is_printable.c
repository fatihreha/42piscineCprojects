/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdisci <fatihr2003@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:26:23 by fdisci            #+#    #+#             */
/*   Updated: 2024/02/07 16:29:02 by fdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	iss_printable(char c)
{
	return ((c >= 32) && (c <= 126));
}

int	ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!iss_printable(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int     main(void)
{
    char    str1[] = "Hello World!";
    char    str2[] = "Hello\tWorld!";

    printf("ft_str_is_printable(\"%s\") = %d\n", str1, ft_str_is_printable(str1));
    printf("ft_str_is_printable(\"%s\") = %d\n", str2, ft_str_is_printable(str2));

    return (0);
}
