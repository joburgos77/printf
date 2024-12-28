/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:00:55 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/28 09:15:55 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuint_pf(unsigned int n, size_t *counter)
{
	if (n >= 10)
		ft_putuint_pf(n / 10, counter);
	ft_putchar_pf((n % 10) + '0', counter);
}

/*int	main(void)
{
	size_t	counter;

	counter = 0;
	ft_putstr_pf("Hello, World!", &counter);
	ft_putchar_pf('\n', &counter);
	ft_putstr_pf("", &counter);
	ft_putchar_pf('\n', &counter);
	return (0);
}*/
