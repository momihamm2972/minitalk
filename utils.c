/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 15:23:46 by momihamm          #+#    #+#             */
/*   Updated: 2023/04/09 09:51:30 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

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