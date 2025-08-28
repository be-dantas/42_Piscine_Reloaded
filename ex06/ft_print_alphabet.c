/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 10:35:26 by bedantas          #+#    #+#             */
/*   Updated: 2025/07/09 15:08:40 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_alphabet(void);
void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	i;
	int	j;

	i = 'a';
	j = 'z';
	while (i <= j)
	{
		ft_putchar(i);
		i++;
	}
}

/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/