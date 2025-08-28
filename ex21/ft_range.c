/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 10:57:48 by bedantas          #+#    #+#             */
/*   Updated: 2025/07/16 10:02:36 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	count;
	int	size;
	int	*result;

	count = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	result = (int *)malloc (sizeof(int) * size);
	if (!result)
		return (NULL);
	while (count < size)
	{
		result[count] = min + count;
		count++;
	}
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	int min = 2;
	int max = 6;
	int *array = ft_range(min, max);
	int	i = 0;
	if (!array)
		return 1;
	while (i < max - min)
	{
		printf("%d", array[i]);
		i++;
	}
	return (0);
}
*/