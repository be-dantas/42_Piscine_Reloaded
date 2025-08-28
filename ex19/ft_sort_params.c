/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:29:57 by bedantas          #+#    #+#             */
/*   Updated: 2025/07/11 10:23:50 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_compare_and_swap(int i, int argc, char **argv);
void	ft_swap(char **a, char **b);
void	ft_print_args(int argc, char *argv[]);

/*
#include <unistd.h>
void	ft_putchar(char c)
{
	write (1, &c,1);
}
*/

// compara os argumentos
void	ft_compare_and_swap(int i, int argc, char **argv)
{
	int	j;
	int	x;

	j = i + 1;
	while (j < argc)
	{
		x = 0;
		while ((argv[i][x] != '\0' || argv[j][x] != '\0')
			&& (argv[i][x] == argv[j][x]))
		{
			x++;
		}
		if (argv[i][x] > argv[j][x])
		{
			ft_swap(&argv[i], &argv[j]);
		}
		j++;
	}
}

// trocar ondem pela tabela ascii
void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// printar no terminal chamndo putchar
void	ft_print_args(int argc, char *argv[])
{
	int	i;
	int	car;

	i = 1;
	while (i < argc)
	{
		car = 0;
		while (argv[i][car] != '\0')
		{
			ft_putchar(argv[i][car]);
			car++;
		}
		ft_putchar('\n');
		i++;
	}
}

// programa
int	main(int argc, char *argv[])
{
	int		i;

	i = 1;
	while (i < argc - 1)
	{
		ft_compare_and_swap(i, argc, argv);
		i++;
	}
	ft_print_args(argc, argv);
	return (0);
}
