/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdisci <fatihr2003@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:20:37 by fdisci            #+#    #+#             */
/*   Updated: 2024/02/07 16:21:16 by fdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main()
{
       printf("%d", ft_str_is_uppercase("ABCDEFGH"));
       printf("\n%d", ft_str_is_uppercase("ABCDEFGHaI"));
       printf("\n%d", ft_str_is_uppercase("-_134556ABCDEFGaH67"));
}