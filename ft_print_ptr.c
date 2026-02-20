/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumdogan <sumdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 23:10:31 by sumdogan          #+#    #+#             */
/*   Updated: 2026/02/12 20:08:43 by sumdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_print_ptr(unsigned long number, int *len)
{
	int	check;

	check = 0;
	if (!number)
	{
		*len += 5;
		check = write(1, "(nil)", 5);
		return (check);
	}
	check = write(1, "0x", 2);
	if (check == -1)
		return (check);
	*len += 2;
	return (ft_print_hexa(number, len, 'x'));
}
