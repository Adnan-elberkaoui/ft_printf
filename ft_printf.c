/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 00:34:08 by aelberka          #+#    #+#             */
/*   Updated: 2026/11/03 12:29:37 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	size_t	i;
	int		count;
	int		result;
	va_list	args;

	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				result = ft_print_char(va_arg(args, int));
				if (result == -1)
					return (result);
				count += result;
				i++;
			}
			else if(format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				result = ft_printf_num(va_arg(args , int));
				if (result == -1)
					return (result);
				count += result;
				i++;
			}
			else if(format[i + 1] == 's')
			{
				result = ft_print_str(va_arg(args , char *));
				if (result == -1)
					return (result);
				count += result;
				i++;
			}
			else if (format[i + 1] == 'p')
			{
				result = ft_printf_ptr(va_arg(args , void *));
				if(result == -1)
					return (result);
				count += result;
				i++;
			}
			else if (format[i + 1] == 'x')
			{
				result = ft_print_hexa_lower( va_arg(args , int));
				if(result == -1)
					return (result);
				count += result;
				i++;
			}
			else if (format[i + 1] == 'X')
			{
				result = ft_print_hexa_upper(va_arg(args , int));
				if(result == -1)
					return (result);
				count += result;
				i++;
			}
			else if (format[i + 1] == 'u')
			{
				result = ft_printf_unsigned(va_arg(args , int));
				if(result == -1)
					return (result);
				count += result;
				i++;
			}
			else if (format[i + 1] == '%')
			{
				result = write(1,"%%",1);
					if(result == -1)
						return -1;
				count += result;
				i++;
			}
		}
		else
		{
			result = ft_print_char(format[i]);
			if (result == -1)
				return (result);
			count += result;
		}
		i++;
	}
	va_end(args);
	return count;
}
