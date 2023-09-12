/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_undec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:54:54 by jong              #+#    #+#             */
/*   Updated: 2023/08/09 15:01:04 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_undec(unsigned int num)
{
	int	i;

	i = 0;
	if (num < 10)
		return (ft_print_chr('0' + num));
	else
	{
		i += ft_print_undec(num / 10);
		i += ft_print_undec(num % 10);
	}
	return (i);
}
