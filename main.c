#include "ft_printf.h"
#include <stdio.h>

void	sum(int count, ...)
{
	float		result;
	float		res;
	int		i;
	va_list	args;

	result = 0;
	res = 0;
	i = 0;
	va_start(args, count);
	while (i < count)
	{
		result = result + va_arg(args, double);
		i++;
	}
	printf("%f\n", result);
	va_end(args);
	va_start(args, count);
	i = 0;
	while (i < count)
	{
		res = res + va_arg(args, double);
		i++;
	}
	printf("%f\n", res);
}
