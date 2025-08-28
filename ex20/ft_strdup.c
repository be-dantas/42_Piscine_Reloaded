/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 09:58:34 by bedantas          #+#    #+#             */
/*   Updated: 2025/07/16 09:18:39 by bedantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src);
int		ft_strlen(char *c);

// calcula o tamanho da string para criar o malloc
int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

// cria espaço na nova string e copia a primeir na segunda
char	*ft_strdup(char *src)
{
	int		count;
	int		len;
	char	*src_cop;

	count = 0;
	len = ft_strlen(src);
	src_cop = malloc (len + 1);
	while (src[count] != '\0')
	{
		src_cop[count] = src[count];
		count++;
	}
	src_cop[count] = '\0';
	return (src_cop);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%s", ft_strdup("Bia"));
	return (0);
}
*/