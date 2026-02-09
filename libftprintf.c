/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumdogan <sumdogan@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 17:37:58 by sumdogan          #+#    #+#             */
/*   Updated: 2026/02/09 19:14:26 by sumdogan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int main()
{
	int a = 5;

	printf("%s\n","SUMEYYE");
	printf("%c\n",'S');
	printf("%c\n","S");
	printf("%c\n",83);
	printf("%d\n",5);
	printf("%p\n",&a);
	printf("%i\n",5);
	printf("%u\n",-1);
	printf("%x\n",13);
	printf("%X\n",13);
	printf("a%s\n","hello");
	printf("%%%%%%%%%%\n");
	printf("%%%%%%%%%\n","gorunecek mı");
	printf("%%\n","gorunecek mı");
	printf("%%s\n","gorunecek mı");
	printf("%h\n","gorunecek mı");
	printf("gorunecek mı");
	printf("aorune%%%ckek mı");

}

