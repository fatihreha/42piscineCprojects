/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdisci <fatihr2003@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 19:55:28 by fdisci            #+#    #+#             */
/*   Updated: 2024/02/06 20:02:39 by fdisci           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main(void)
{
	int a = 10;
	int b = 5;
	int div; // div değişkeni tanımlandı
	int mod; // mod değişkeni tanımlandı

	ft_div_mod(a, b, &div, &mod); // div ve mod adreslerini geçiyoruz
	printf("Bölüm: %d\n", div);
	printf("Kalan: %d", mod);
	return (0);
}