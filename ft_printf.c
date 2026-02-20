/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumdogan <sumdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:37:58 by sumdogan          #+#    #+#             */
/*   Updated: 2026/02/13 11:24:27 by sumdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static int	ft_find(char c)
{
	int		i;
	char	*str;

	i = 0;
	str = "cspdiuxX";
	while (str[i])
	{
		if (str[i] == c || c == '%')
			return (1);
		else
			i++;
	}
	return (0);
}

static int	ft_control(char *format, int *len, va_list *head)
{
	int	i;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (!format[i])
				return (-1);
			if (ft_find(format[i]))
				ft_check_box(format[i], head, len);
			else if (write(1, "%", 1) == -1 || write(1, &format[i], 1) == -1)
				return (-1);
			else
				(*len) += 2;
		}
		else if ((*len)++ >= 0 && write(1, &format[i], 1) == -1)
			return (-1);
		i++;
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	int		error;
	va_list	head;

	len = 0;
	if (!(format))
	{
		return (-1);
	}
	va_start(head, format);
	error = ft_control((char *)format, &len, &head);
	va_end(head);
	if (error == (-1))
	{
		return (-1);
	}
	return (len);
}
