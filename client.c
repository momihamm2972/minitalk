/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 10:12:56 by momihamm          #+#    #+#             */
/*   Updated: 2023/04/26 22:11:32 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

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

void	take_bits(char *str, int pid)
{
	int	indx;
	int	pofs;

	indx = 0;
	while (str[indx])
	{
		pofs = 7;
		while (pofs >= 0)
		{
			if ((str[indx] & 1 << pofs) == 0)
				kill (pid, SIGUSR2);
			else
				kill (pid, SIGUSR1);
			usleep(1000);
			pofs--;
		}
		indx++;
	}
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
