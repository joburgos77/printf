/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 13:02:10 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/28 09:14:51 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdio.h>
# include <string.h>
# include <limits.h> 

# define HEX_LOW_BASE "0123456789abcdef"
# define HEX_UP_BASE "0123456789ABCDEF"

typedef struct s_conversion
{
	char				*str;
	unsigned long long	n;
	char				*base;
	size_t				base_len;
	size_t				len;
}	t_conversion;

int		ft_printf(char const *str, ...);

void	ft_putstr_pf(char *str, size_t *counter);
void	ft_putchar_pf(char c, size_t *counter);
void	ft_putnbr_pf(int num, size_t *counter);
void	ft_putuint_pf(unsigned int num, size_t *counter);
void	ft_puthex_pf(unsigned int num, size_t *counter, char *base);
void	ft_putptr_pf(void *ptr, size_t *counter);

char	*ft_aux_pf(unsigned long long n, char *base);

#endif