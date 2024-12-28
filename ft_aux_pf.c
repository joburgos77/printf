/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux_pf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joburgos <joburgos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 15:01:04 by joburgos          #+#    #+#             */
/*   Updated: 2024/12/27 13:59:23 by joburgos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	calculate_length(unsigned long long n, size_t base_len)
{
	size_t	len;

	len = 1;
	while (n >= base_len)
	{
		n /= base_len;
		len++;
	}
	return (len);
}

static void	convert_number_to_string(struct s_conversion *conv)
{
	conv->str[conv->len] = '\0';
	if (conv->n == 0)
		conv->str[0] = conv->base[0];
	while (conv->n)
	{
		conv->str[--conv->len] = conv->base[conv->n % conv->base_len];
		conv->n /= conv->base_len;
	}
}

char	*ft_aux_pf(unsigned long long n, char *base)
{
	t_conversion	conv;

	if (!base)
		return (NULL);
	conv.base_len = strlen(base);
	if (conv.base_len < 2)
		return (NULL);
	conv.len = calculate_length(n, conv.base_len);
	conv.str = (char *)malloc(sizeof(char) * (conv.len + 1));
	if (!conv.str)
		return (NULL);
	conv.n = n;
	conv.base = base;
	convert_number_to_string(&conv);
	return (conv.str);
}

/*int	main(void)
{
	char	*str;

	str = ft_aux_pf(42, HEX_LOW_BASE);
	printf("%s\n", str);
	free(str);
	str = ft_aux_pf(42, HEX_UP_BASE);
	printf("%s\n", str);
	free(str);
	str = ft_aux_pf(0, HEX_LOW_BASE);
	printf("%s\n", str);
	free(str);
	str = ft_aux_pf(0, HEX_UP_BASE);
	printf("%s\n", str);
	free(str);
	return (0);
}*/
