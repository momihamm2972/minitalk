/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 00:50:55 by momihamm          #+#    #+#             */
/*   Updated: 2023/04/26 21:10:56 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include "minitalk.h"
# include <signal.h>

int		ft_atoi(const char *str);
void	take_bits(char *str, int pid);
int		check_if_valid(char *str);
int		ft_strlen(char *str);
void	enter_bits(int signum, siginfo_t *c_pid, void *content);

#endif
