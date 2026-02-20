/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumdogan <sumdogan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 11:00:11 by sumdogan          #+#    #+#             */
/*   Updated: 2026/02/13 11:01:51 by sumdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_check_box(char c, va_list *head, int *len);
int	ft_print_hexa(unsigned long number, int *len, char c);
int	ft_print_numbers(int n, int *len);
int	ft_print_ptr(unsigned long number, int *len);
int	ft_print_str(char *str, int *len);
int	ft_print_chr(int chr, int *len);
int	ft_print_unumbers(unsigned int n, int *len);

#endif
