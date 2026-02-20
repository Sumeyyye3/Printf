/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unumbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumdogan <sumdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 06:52:47 by sumdogan          #+#    #+#             */
/*   Updated: 2026/02/12 19:33:03 by sumdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print_unumbers(unsigned int n, int *len)
{
	char	c;

	if (n <= 9 && n >= 0)
	{
		(*len)++;
		c = n + '0';
		return (write(1, &c, 1));
	}
	else
	{
		ft_print_unumbers(n / 10, len);
		c = (n % 10) + '0';
		(*len)++;
		return (write(1, &c, 1));
	}
}
