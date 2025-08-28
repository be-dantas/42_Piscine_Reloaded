/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:36:17 by bedantas          #+#    #+#             */
/*   Updated: 2025/07/09 10:36:18 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
int main()
{
	int a = 4;
	int b = 3;
	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod);
	printf("%d, %d", div, mod);
	return(0);
}
*/