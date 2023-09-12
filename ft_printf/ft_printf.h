/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:28:56 by jong              #+#    #+#             */
/*   Updated: 2023/08/09 20:30:15 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_print_chr(int c);
int	ft_print_str(char *str);
int	ft_print_point(unsigned long long pointer);
int	ft_print_dec(int num);
int	ft_print_undec(unsigned int num);
int	print_hexa(unsigned long long pointer);
int	print_long_hexa(unsigned int pointer, char flag);

#endif
