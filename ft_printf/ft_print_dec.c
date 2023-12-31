/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:57:51 by jong              #+#    #+#             */
/*   Updated: 2023/08/09 15:01:29 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_dec(int num)
{
	int	i;

	if (num < 0)
	{
		i = ft_print_chr('-');
		i += ft_print_undec(-num);
	}
	else
		i = ft_print_undec(num);
	return (i);
}
