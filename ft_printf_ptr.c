/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 09:39:07 by aelberka          #+#    #+#             */
/*   Updated: 2026/11/03 11:47:20 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_ptr(void *ptr)
{
	int count ;

	count = 0;
	if(!ptr)
		return (write(1,"(nil)",5));
	if(write(1,"0x",2) == -1)
		return (-1);
	
	count = ft_puthex_base((unsigned long)ptr, "0123456789abcdef");
	if(count == -1)
		return (-1);
	
	count +=2;
	return count;
}
