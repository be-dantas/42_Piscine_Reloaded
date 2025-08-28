/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:35:46 by bedantas          #+#    #+#             */
/*   Updated: 2025/07/09 15:09:00 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_numbers(void);
void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	i;

	i = '0';
	while (i <= '9')
	{
		ft_putchar(i);
		i++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/