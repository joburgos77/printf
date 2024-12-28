/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 14:39:50 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/26 14:44:40 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_pf(char c, size_t *counter)
{
	write(1, &c, 1);
	(*counter)++;
}

/*int	main(void)
{
	size_t	counter;

	counter = 0;
	ft_putchar_pf('a', &counter);
	ft_putchar_pf('b', &counter);
	ft_putchar_pf('c', &counter);
	ft_putchar_pf('d', &counter);
	ft_putchar_pf('\n', &counter);
	return (0);
}*/
