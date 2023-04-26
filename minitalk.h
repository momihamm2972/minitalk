/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 15:24:24 by momihamm          #+#    #+#             */
/*   Updated: 2023/04/26 21:10:45 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <signal.h>

int		ft_atoi(const char *str);
void	take_bits(char *str, int pid);
int		check_if_valid(char *str);
int		ft_strlen(char *str);
void	enter_bits(int signum, siginfo_t *c_pid, void *content);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

#endif
