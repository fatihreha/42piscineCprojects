/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdisci <fatihr2003@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:31:37 by fdisci            #+#    #+#             */
/*   Updated: 2024/02/07 15:47:57 by fdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

char    *ft_strcpy(char *dest, const char *src);

int main(void)
{
    char src[] = "Hello, world!";
    char dest[50];

    ft_strcpy(dest, src);
    printf("Kopyalanan dizi: %s\n", dest);

    return 0;
}
