/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:42:45 by aelberka          #+#    #+#             */
/*   Updated: 2026/11/04 16:05:06 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	//int b;
	//int p = 255;
	//ft_printf("%d , %p" , p , &p);
	//printf("%x\n" , -3434);
	//ft_printf("22 % hello" , 3434);
	//ft_printf("hello word %c , %s , %d \n", 'e' , "hello" , 435);
	//printf("%d\n" , INT_MAX + 1);
	//ft_printf("%d" ,  INT_MAX  1);
	//ft_printf("%X" , 255);
	int a = 2;
	char str[] = "hello";

	//printf("%c %s %p %d %i %u %x %X %% % \n", 'a', str, str, a, a, a, a, a);
	//ft_printf("%c %s %p %d %i %u %x %X %% % \n", 'a', str, str, a, a, a, a, a);
	//printf("%d\n");
	ft_printf("%a");
	
}
