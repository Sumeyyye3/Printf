/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_chr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumdogan <sumdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 20:42:42 by sumdogan          #+#    #+#             */
/*   Updated: 2026/02/12 19:47:56 by sumdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print_chr(int chr, int *len)
{
	int	check;

	(*len)++;
	check = write(1, &chr, 1);
	return (check);
}
