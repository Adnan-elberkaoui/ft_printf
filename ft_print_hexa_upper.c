/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_upper.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:49:33 by aelberka          #+#    #+#             */
/*   Updated: 2026/11/07 18:06:33 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa_upper(unsigned int n)
{
	int	count;

	count = 0;
	count = ft_puthex_base(n, "0123456789ABCDEF");
	if (count == -1)
		return (-1);
	return (count);
}
