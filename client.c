/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jong <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 01:18:44 by jong              #+#    #+#             */
/*   Updated: 2023/09/08 12:09:37 by jong             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf/ft_printf.h"
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <stdio.h>

void	send_signal(int pid, unsigned char character)
{
	int				i;
	unsigned char	temp;

	i = 8;
	temp = character;
	while (i > 0)
	{
		i--;
		temp = character >> i;
		if (temp % 2 == 0)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(100);
	}
}

int	ft_atoi(char *str)
{
	int	idx;
	int	res;
	int	sign;

	idx = 0;
	res = 0;
	sign = 1;
	while (str[idx] == 32 || (str[idx] >= 9 && str[idx] <= 13))
		idx++;
	if (str[idx] == '+')
		idx++;
	if (str[idx] == '-')
	{
		sign *= -1;
		idx++;
	}
	while (str[idx] != '\0' && (str[idx] >= '0' && str[idx] <= '9'))
	{
		res *= 10;
		res += str[idx] - '0';
		idx++;
	}
	return (res * sign);
}

int	main(int ac, char **av)
{
	pid_t	server_pid;
	char	*message;
	int		idx;

	if (ac != 3)
	{
		ft_printf("Invalid number of arguments\n");
		ft_printf("Enter Format: .\\client <server PID> \"message\"\n");
		exit (0);
	}
	server_pid = ft_atoi(av[1]);
	message = av[2];
	idx = 0;
	while (message[idx])
		send_signal(server_pid, message[idx++]);
	send_signal(server_pid, '\0');
	return (0);
}
