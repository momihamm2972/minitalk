/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 15:23:46 by momihamm          #+#    #+#             */
/*   Updated: 2023/04/26 21:16:01 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	ft_strlen(char *str)
{
	int	indx;

	indx = 0;
	while (str[indx])
		indx++;
	return (indx);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	r;
	int	s;

	i = 0;
	r = 0;
	s = 1;
	while (str[i] != '\0')
	{
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i] == '-' || str[i] == '+' )
		{
			if (str[i] == '-' )
				s = -1;
			i++;
		}
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		r = (r * 10) + str[i] - '0';
		i++;
		if ((str[i] >= 0 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 127))
			break ;
	}
	return (r * s);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	indx;

	indx = 0;
	while (str[indx])
	{
		ft_putchar (str[indx]);
		indx++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb < 10)
		ft_putchar (nb + '0');
	if (nb > 9)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
	if (nb < 0 && nb > -2147483648)
	{
		write (1, "-", 1);
		nb *= -1;
		ft_putnbr (nb);
	}
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
}
