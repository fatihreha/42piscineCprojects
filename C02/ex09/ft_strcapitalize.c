/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdisci <fatihr2003@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:47:03 by fdisci            #+#    #+#             */
/*   Updated: 2024/02/07 16:48:33 by fdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			{
				if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
				{
					if (!(str[i - 1] <= 'Z' && str[i - 1] >= 'A'))
					{
						str[i] -= 32;
					}
				}
			}
		}
		i++;
	}
	return (str);
}

int     main(void)
{
    char str[] = "hello world!";

    printf("Original string: %s\n", str);
    printf("Capitalized string: %s\n", ft_strcapitalize(str));
    return (0);
}

