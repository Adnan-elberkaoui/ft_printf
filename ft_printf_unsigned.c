/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:54:38 by aelberka          #+#    #+#             */
/*   Updated: 2026/11/03 11:56:29 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_unsigned(unsigned int n)
{
	unsigned long long	nb;
	char		c;
	int			count;
	int			result;

	count = 0;
	nb = n;
	if (nb >= 10)
	{
		result = ft_printf_unsigned(nb / 10);
		if (result == -1)
			return (-1);
		count += result;
	}
	c = nb % 10 + '0';
	if (write(1, &c, 1) != 1)
		return (-1);
	count++;
	return (count);
}
