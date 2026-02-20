/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumdogan <sumdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 20:49:52 by sumdogan          #+#    #+#             */
/*   Updated: 2026/02/12 19:32:47 by sumdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	special(int *len)
{
	(*len) += 11;
	return (write(1, "-2147483648", 11));
}

int	ft_print_numbers(int n, int *len)
{
	char	c;

	if (n < 0 && n != -2147483648)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		(*len)++;
		n = -n;
	}
	if (n == -2147483648)
		return (special(len));
	if (n >= 10)
	{
		if (ft_print_numbers(n / 10, len) == -1)
			return (-1);
	}
	c = (n % 10) + '0';
	(*len)++;
	if (write(1, &c, 1) == -1)
		return (-1);
	return (0);
}
