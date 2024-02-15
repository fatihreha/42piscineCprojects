/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdisci <fatihr2003@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:29:42 by fdisci            #+#    #+#             */
/*   Updated: 2024/02/07 19:31:24 by fdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int res;

	i = 0;
	res = 1;
	if (nb < 0)
		return (0);
	while (++i <= nb)
	{
		res *= i;
	}
	return (res);
}

#include <stdio.h>

int		ft_iterative_factorial(int nb);

int		main(void)
{
	int i;

	i = 0;
	printf("%d\n", ft_iterative_factorial(10));
}
