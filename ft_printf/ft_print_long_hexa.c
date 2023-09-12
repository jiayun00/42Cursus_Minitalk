/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_long_hexa.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:06:53 by jong              #+#    #+#             */
/*   Updated: 2023/08/09 17:38:10 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_long_hexa(unsigned int pointer, char flag)
{
	int	i;

	i = 0;
	if (pointer < 16)
	{
		if (pointer > 9)
		{
			if (flag == 'x')
				return (ft_print_chr('a' + (pointer - 10)));
			return (ft_print_chr('A' + (pointer - 10)));
		}
		return (ft_print_chr('0' + pointer));
	}
	else
	{
		i += print_long_hexa(pointer / 16, flag);
		i += print_long_hexa(pointer % 16, flag);
	}
	return (i);
}
