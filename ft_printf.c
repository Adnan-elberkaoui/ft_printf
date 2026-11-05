/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 00:34:08 by aelberka          #+#    #+#             */
/*   Updated: 2026/11/04 16:35:54 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char c, va_list *args)
{
	if(c == 'c')
		return (ft_print_char(va_arg(*args, int)));
	else if (c == 'd' || c == 'i')
		return (ft_printf_num(va_arg(*args , int)));
	else if (c == 's')
		return (ft_print_str(va_arg(*args , char *)));
	else if (c == 'p')
		return (ft_printf_ptr(va_arg(*args , void *)));
	else if (c == 'x')
		return (ft_print_hexa_lower( va_arg(*args , unsigned int)));
	else if (c == 'X')
		return (ft_print_hexa_upper(va_arg(*args , unsigned int)));
	else if (c == 'u')
		return (ft_printf_unsigned(va_arg(*args , unsigned int)));
	else if (c == '\0')
		return (-1);
	else if (c == '%')
		return (write(1, "%", 1));
	if (write(1, "%", 1) == -1)
		return (-1);
	if (write(1, &c, 1) == -1)
	return (-1);
	return (2);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	int		returnn;
	va_list	args;

	if (!format)
		return (-1);
	count = 0;
	va_start(args, format);
	while (count != -1 && *format)
	{
		if (*format == '%')
		{
			returnn = ft_format(*(format + 1), &args);
			format++;
		}
		else
			returnn = write(1, format, 1);
		if (returnn == -1)
			count = -1;
		else
			count += returnn;
		format++;
	}
	va_end(args);
	return (count);
}
