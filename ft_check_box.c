/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_box.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumdogan <sumdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 23:18:53 by sumdogan          #+#    #+#             */
/*   Updated: 2026/02/12 19:47:52 by sumdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_box(char c, va_list *head, int *len)
{
	if (c == 's')
		return (ft_print_str(va_arg(*head, char *), len));
	else if (c == 'c')
		return (ft_print_chr(va_arg(*head, int), len));
	else if (c == 'p')
		return (ft_print_ptr(va_arg(*head, unsigned long), len));
	else if (c == 'd' || c == 'i' || c == 'u')
	{
		if (c == 'u')
			return (ft_print_unumbers(va_arg(*head, unsigned int), len));
		else
			return (ft_print_numbers(va_arg(*head, int), len));
	}
	else if (c == 'x' || c == 'X')
		return (ft_print_hexa(va_arg(*head, unsigned int), len, c));
	else if (c == '%')
		return (ft_print_chr('%', len));
	return (0);
}
