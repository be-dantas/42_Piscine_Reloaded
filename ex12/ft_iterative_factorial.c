/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:36:22 by bedantas          #+#    #+#             */
/*   Updated: 2025/07/16 11:20:01 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb < 0)
		return (0);
	if (nb > 12)
		return (0);
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
	return(0);
}
*/