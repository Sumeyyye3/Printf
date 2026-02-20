/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumdogan <sumdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 20:54:32 by sumdogan          #+#    #+#             */
/*   Updated: 2026/02/12 19:32:43 by sumdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print_hexa(unsigned long number, int *len, char c)
{
	int		i;
	char	*number_chr;
	int		check;

	i = 0;
	if (c == 'X')
		number_chr = "0123456789ABCDEF";
	if (c == 'x')
		number_chr = "0123456789abcdef";
	if (number >= 16)
	{
		ft_print_hexa(number / 16, len, c);
	}
	i = number % 16;
	check = write(1, &number_chr[i], 1);
	(*len)++;
	return (check);
}
