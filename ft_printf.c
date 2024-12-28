/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 12:51:33 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/26 14:37:35 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(va_list va, char *str, size_t *counter)
{
	if (*str == 'c')
		ft_putchar_pf(va_arg(va, int), counter);
	else if (*str == 's')
		ft_putstr_pf(va_arg(va, char *), counter);
	else if (*str == 'p')
		ft_putptr_pf(va_arg(va, void *), counter);
	else if (*str == 'i' || *str == 'd')
		ft_putnbr_pf(va_arg(va, int), counter);
	else if (*str == 'u')
		ft_putuint_pf(va_arg(va, unsigned int), counter);
	else if (*str == 'x' || *str == 'X')
	{
		if (*str == 'x')
			ft_puthex_pf(va_arg(va, unsigned int), counter, HEX_LOW_BASE);
		else
			ft_puthex_pf(va_arg(va, unsigned int), counter, HEX_UP_BASE);
	}
	else if (*str == '%')
		ft_putchar_pf('%', counter);
}

int	ft_printf(char const *str, ...)
{
	va_list	va;
	size_t	counter;

	if (!str)
		return (0);
	counter = 0;
	va_start(va, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_format(va, (char *)str, &counter);
		}
		else
			ft_putchar_pf(*str, &counter);
		str++;
	}
	va_end(va);
	return (counter);
}

/*int	main(void)
{
	size_t	counter;

	counter = 0;
	ft_printf("Print Carachters: %c, %c\n", 'A', 'B');
	ft_printf ("Print String: %s\n", "Hello World!");
	ft_printf("Print Pointer Adress: %p\n", &counter);
	ft_printf("Print Integer: %i\n", 12345);
	ft_printf("Print Unsigned Integer: %u\n", 12345);
	ft_printf("Print Hexadecimal low: %x\n", 42);
	ft_printf("Print Hexadecimal up: %X\n", 42);
	ft_printf("Print Percentage: %%\n", 42);
	printf("Total Counter: %zu\n", counter);
	return (0);
}*/
