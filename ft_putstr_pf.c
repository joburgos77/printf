/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:00:50 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/28 09:11:58 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr_pf(char *str, size_t *counter)
{
	if (!str)
	{
		ft_putstr_pf("(null)", counter);
		return ;
	}
	while (*str)
	{
		ft_putchar_pf(*str, counter);
		str++;
	}
}

/*int	main(void)
{
	size_t	counter;

	counter = 0;
	ft_putuint_pf(42, &counter);
	ft_putchar_pf('\n', &counter);
	ft_putuint_pf(0, &counter);
	ft_putchar_pf('\n', &counter);
	ft_putuint_pf(2147483647, &counter);
	ft_putchar_pf('\n', &counter);
	return (0);
}*/