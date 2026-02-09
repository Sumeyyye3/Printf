/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumdogan <sumdogan@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 18:29:18 by sumdogan          #+#    #+#             */
/*   Updated: 2026/02/09 20:43:13 by sumdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int ft_printf(const char *first, ...)
{
	int i;
	va_list head;

	va_start(first,head);
	i = 0;
	while(first[i])
	{
		if(first[i] == '%')
		{
			i++;
			if(first[i] == 's' || first[i] == 'c')
			{
				ft_print_str(first);
			}
			if(first[i] == 'x' || first[i] == 'X')
			{
				
			}
			if(first[i] == 'i'||)
		}
	}
}
