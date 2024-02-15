/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdisci <fatihr2003@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:35:30 by fdisci            #+#    #+#             */
/*   Updated: 2024/02/07 19:37:29 by fdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 1;
	n = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (++i <= power)
	{
		nb *= n;
	}
	return (nb);
}

#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int		main(void)
{
	int		nb;
	int		power;

	nb = 5;
	power = 4;
	printf("%d\n", ft_iterative_power(nb, power));
}

