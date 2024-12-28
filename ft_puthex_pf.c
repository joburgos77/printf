/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 14:45:02 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/28 09:27:11 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_pf(unsigned int n, size_t *counter, char *base)
{
	char	*str;

	str = ft_aux_pf(n, base);
	ft_putstr_pf(str, counter);
	free(str);
}

/*int	main(void)
{
    size_t	counter;

    counter = 0;
    ft_puthex_pf(0, &counter, "0123456789abcdef");
    ft_putchar_pf('\n', &counter);
    ft_puthex_pf(0, &counter, "0123456789ABCDEF");
    ft_putchar_pf('\n', &counter);
    return (0);
}*/
