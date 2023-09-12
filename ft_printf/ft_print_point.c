/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:51:35 by jong              #+#    #+#             */
/*   Updated: 2023/08/09 20:38:54 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_point(unsigned long long pointer)
{
	int	i;

	i = ft_print_str("0x");
	i += print_hexa(pointer);
	return (i);
}
