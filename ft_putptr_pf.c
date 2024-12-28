/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:20:08 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/28 09:26:13 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr_pf(void *ptr, size_t *counter)
{
	unsigned long long	addr;
	char				*str;

	if (!ptr)
	{
		ft_putstr_pf("(nil)", counter);
		return ;
	}
	addr = (unsigned long long)ptr;
	ft_putstr_pf("0x", counter);
	str = ft_aux_pf(addr, "0123456789abcdef");
	ft_putstr_pf(str, counter);
	free(str);
}

/*int	main(void)
{
	size_t	counter;

	counter = 0;
	ft_putptr_pf((void *)42, &counter);
	ft_putchar_pf('\n', &counter);
	ft_putptr_pf((void *)42, &counter);
	ft_putchar_pf('\n', &counter);
	ft_putptr_pf((void *)0, &counter);
	ft_putchar_pf('\n', &counter);
	ft_putptr_pf((void *)0, &counter);
	ft_putchar_pf('\n', &counter);
	return (0);
}*/
