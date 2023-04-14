/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momihamm <momihamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 15:23:46 by momihamm          #+#    #+#             */
/*   Updated: 2023/04/14 03:01:12 by momihamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int ft_strlen(char *str)
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

// void	take_bits(char *str)
// {
// 	int	indx;
// 	int pofs;
// 	int shed;
	
// 	indx = 0;
// 	shed = 1;
// 	while (str[indx])
// 	{
// 		pofs = 7;
// 		while (pofs >= 0)
// 		{
// 			if ((str[indx] & shed << pofs) == 0)
// 				printf ("0");
// 				//kill(av[1],)
// 			else
// 				printf ("1");
// 			pofs--;
// 		}
// 		printf ("***");
// 		indx++;
// 	}
// }

char	enter_bits(char *str)
{
	char	c;
	int	ixofs;
	int	indix;

	c = 0;
	ixofs = 0;
	indix = ft_strlen (str) - 1;
	while (indix >= 0)
	{
		if (str[indix] == '1')
			c = c | (1 << ixofs);
		indix--;
		ixofs++;
	}
	return (c);
}

int check_if_valid(char *str)
{
    int indx;
    
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
