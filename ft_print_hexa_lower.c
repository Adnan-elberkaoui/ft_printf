/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa_lower.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:33:58 by aelberka          #+#    #+#             */
/*   Updated: 2026/11/07 16:33:53 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa_lower(unsigned int n)
{
	int	count;

	count = 0;
	count = ft_puthex_base(n, "0123456789abcdef");
	if (count == -1)
		return (-1);
	return (count);
}
