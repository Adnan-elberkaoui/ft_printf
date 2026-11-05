/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelberka <aelberka@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 00:32:12 by aelberka          #+#    #+#             */
/*   Updated: 2026/11/03 16:12:58 by aelberka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF



# include <stdarg.h>
# include <stdio.h>
#include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_print_char(char c);
int	ft_printf_num(int n);
int	ft_print_str(char *str);
int	ft_printf_ptr(void	*s);
int	ft_puthex_base(unsigned long n, char *base);
int	ft_print_hexa_lower(unsigned int n);
int	ft_print_hexa_upper(unsigned int n);
int ft_printf_unsigned(unsigned int n);

#endif