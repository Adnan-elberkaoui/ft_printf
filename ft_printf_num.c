/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 01:05:56 by aelberka          #+#    #+#             */
/*   Updated: 2026/11/03 11:14:04 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_num(int n)
{
	long long	nb;
	char		c;
	int			count;
	int			result;

	count = 0;
	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		if (write(1, "-", 1) != 1)
			return (-1);
		count++;
	}
	if (nb >= 10)
	{
		result = ft_printf_num(nb / 10);
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