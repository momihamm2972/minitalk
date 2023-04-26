/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 00:50:29 by momihamm          #+#    #+#             */
/*   Updated: 2023/04/26 22:58:17 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

void	enter_bits(int signum, siginfo_t *c_pid, void *content)
{
	static char		c;
	static pid_t	pid;
	static int		indx;

	(void) content;
	if (c_pid->si_pid != pid)
	{
		indx = 7;
		c = 0;
		pid = c_pid->si_pid;
	}
	if (signum == SIGUSR1)
		c = c | (1 << indx);
	indx--;
	if (indx < 0)
	{
		if (c == 0)
			kill (pid, SIGUSR2);
		write (1, &c, 1);
		indx = 7;
		c = 0;
	}
}

int	main(int ac, char **av)
{
	struct sigaction	my_struct;
	pid_t				pross_id;

	pross_id = getpid();
	(void) av;
	if (ac == 1)
	{
		ft_putstr ("PID : ");
		ft_putnbr (pross_id);
		write (1, "\n", 1);
		my_struct.sa_flags = SA_SIGINFO;
		my_struct.sa_sigaction = &enter_bits;
		sigaction (SIGUSR2, &my_struct, NULL);
		sigaction (SIGUSR1, &my_struct, NULL);
		while (1)
			pause();
	}
	else
		ft_putstr ("THE SERVER DOES'T TAKE ANY ARGUMENT!!\n");
}
