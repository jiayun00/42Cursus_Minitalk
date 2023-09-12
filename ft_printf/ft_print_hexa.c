/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:03:12 by jong              #+#    #+#             */
/*   Updated: 2023/08/09 20:37:56 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexa(unsigned long long pointer)
{
	int	i;

	i = 0;
	if (pointer < 16)
	{
		if (pointer > 9)
			return (ft_print_chr('a' + (pointer - 10)));
		return (ft_print_chr('0' + pointer));
	}
	else
	{
		i += print_hexa(pointer / 16);
		i += print_hexa(pointer % 16);
	}
	return (i);
}
