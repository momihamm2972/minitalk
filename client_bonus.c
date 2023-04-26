/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 00:50:07 by momihamm          #+#    #+#             */
/*   Updated: 2023/04/26 19:31:18 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

int	check_if_valid(char *str)
{
	int	indx;

	indx = 0;
	while (str[indx])
	{
		if (str[indx] >= '0' && str[indx] <= '9')
			indx++;
		else
			return (1);
	}
	return (0);
}

void	print_msg(int sig)
{
	(void) sig;
	write (1, "THE MESSAGE WAS SENT SUCCESSFULLY!\n", 36);
}

void	recieve(int pid)
{
	int	indx;

	indx = 0;
	while (indx < 8)
	{
		kill (pid, SIGUSR2);
		usleep (800);
		indx++;
	}
}

void	take_bits(char *str, int pid)
{
	int	indx;
	int	pofs;
	int	i_of_reciev;

	indx = 0;
	i_of_reciev = 0;
	while (str[indx])
	{
		pofs = 7;
		while (pofs >= 0)
		{
			if ((str[indx] & 1 << pofs) == 0)
				kill (pid, SIGUSR2);
			else
				kill (pid, 30);
			usleep(800);
			signal (SIGUSR2, print_msg);
			pofs--;
		}
		indx++;
	}
	if (str[indx] == '\0')
		recieve (pid);
}

int	main(int ac, char **av)
{
	int	pid;

	pid = 0;
	if (ac < 3)
		ft_putstr ("Error: to few arguments\n");
	else if (ac > 3)
		ft_putstr ("Error: to many arguments\n");
	else
	{
		if (check_if_valid(av[1]) == 0)
			pid = ft_atoi(av[1]);
		else
			ft_putstr ("Error 404\n");
		take_bits(av[2], pid);
	}
	return (0);
}
