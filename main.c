/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adrgalle <adrgalle@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 18:56:38 by adrgalle          #+#    #+#             */
/*   Updated: 2024/09/22 12:58:21 by adrgalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	isalpha;
	int	isdigit;
	int	isalnum;
	int	isascii;
	int	isprint;
	int	strlen;
	char str[50] = "Prueba memset"; // Cadena original

	isalpha = ft_isalpha('b');
	isdigit = ft_isdigit('b');
	isalnum = ft_isalnum('b');
	isascii = ft_isascii('b');
	isprint = ft_isprint('b');
	strlen = ft_strlen("bajo");
	ft_memset(str, '*', 13);
	printf("El resultado de ft_isalpha para 'b' es %i", isalpha);
	printf("\n");
	printf("El resultado de ft_isdigit para 'b' es %i", isdigit);
	printf("\n");
	printf("El resultado de ft_isalnum para 'b' es %i", isalnum);
	printf("\n");
	printf("El resultado de ft_isascii para 'b' es %i", isascii);
	printf("\n");
	printf("El resultado de ft_isprint para 'b' es %i", isascii);
	printf("\n");
	printf("El resultado de ft_strlen para 'bajo' es %i", strlen);
	printf("\n");
	printf("El resultado de ft_memset para 'Prueba memset' es %s", str);
	
	return (0);
}
