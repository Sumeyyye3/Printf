/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumdogan <sumdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 19:57:28 by sumdogan          #+#    #+#             */
/*   Updated: 2026/02/12 19:33:00 by sumdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print_str(char *str, int *len)
{
	int	i;
	int	check;

	i = 0;
	if (!str)
	{
		*len += 6;
		return (write(1, "(null)", 6));
	}
	while (str[i])
	{
		check = write(1, &str[i], 1);
		if (check == -1)
			return (-1);
		i++;
		(*len)++;
	}
	return (check);
}
