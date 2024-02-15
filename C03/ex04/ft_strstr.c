/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdisci <fatihr2003@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 17:13:59 by fdisci            #+#    #+#             */
/*   Updated: 2024/02/07 17:18:49 by fdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	aux;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			aux = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					aux = 1;
				i++;
			}
			if (aux == 0)
				return (str);
		}
		str++;
	}
	return (0);
}

int main(void)
{
    char str[] = "HOLALALAQUEJAJAYUPIpapapapapap";
    char find[] = "P";
    printf("%s\n", ft_strstr(str, find));
    printf("%s", strstr(str, find));
    return (0);
}
