/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:00:45 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/28 09:28:00 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_pf(int n, size_t *counter)
{
	if (n == INT_MIN)
	{
		ft_putstr_pf("-2147483648", counter);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_pf('-', counter);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_pf(n / 10, counter);
	ft_putchar_pf((n % 10) + '0', counter);
}

/*int	main(void)
{
    size_t	counter;

    counter = 0;
    ft_putnbr_pf(12345, &counter);
    ft_putnbr_pf(-12345, &counter);
    ft_putnbr_pf(INT_MIN, &counter);
    ft_putnbr_pf(0, &counter);
    printf("Total Counter: %zu\n", counter);
    return (0);
}*/
