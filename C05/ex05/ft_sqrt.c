/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdisci <fatihr2003@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:40:26 by fdisci            #+#    #+#             */
/*   Updated: 2024/02/07 19:43:08 by fdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt_recur(int nb, int i)
{
	if (nb > 2147395600)
		return (0);
	if (i * i == nb)
		return (i);
	if (i * i < nb)
		return (ft_sqrt_recur(nb, i + 1));
	return (0);
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_recur(nb, 0));
}

int main()
{
    int num = 25;
    int sqrt_num = ft_sqrt(num);
    printf("Karekök: %d\n", sqrt_num);
    return 0;
}
