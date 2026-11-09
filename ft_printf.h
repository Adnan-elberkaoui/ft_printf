/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 00:32:12 by aelberka          #+#    #+#             */
/*   Updated: 2026/11/08 17:49:29 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_print_char(char c);
int	ft_printf_num(int n);
int	ft_print_str(char *str);
int	ft_printf_ptr(void *s);
int	ft_puthex_base(unsigned long n, char *base);
int	ft_print_hexa_lower(unsigned int n);
int	ft_print_hexa_upper(unsigned int n);
int	ft_printf_unsigned(unsigned int n);

#endif